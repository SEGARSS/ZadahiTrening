/*
Задача:
Создание системы банковских счетов с функциями:
    - Пополнение (deposit)
    - Снятие (withdraw)
    - Дополнительные функции у специализированных счетов

Структура классов:
BankAccount – базовый класс с балансом и методами deposit() и withdraw()
SavingsAccount – наследует BankAccount, добавляет процентную ставку и метод applyInterest()
CurrentAccount – наследует BankAccount, добавляет кредитный лимит и изменённый withdraw()

Класс BankAccount (Базовый банковский счёт)
- Переменная balance (закрытая - private) – защищает данные от прямого изменения
- Конструктор BankAccount(double initialBalance) – устанавливает баланс при создании объекта
- Метод deposit(double amount) – пополняет счёт
- Метод withdraw(double amount) – снимает деньги, если хватает средств
- Метод getBalance() – возвращает текущий баланс


Класс SavingsAccount (аналог сберегательного счёта)
- Наследует BankAccount (public наследование)
- Переменная interestRate – процентная ставка
- Метод applyInterest() – начисляет проценты


Класс CurrentAccount (Текущий счёт с кредитным лимитом)
- Наследует BankAccount
- Добавляет overdraftLimit – кредитный лимит
- Метод withdraw() позволяет снимать деньги даже при уходе в минус, но в пределах лимита
*/

#include<iostream>
#include<string>
using namespace std;

//---------------------------------------------------------------------------------------------
class BankAccount
{
public:
    BankAccount(double initialBalance) // устанавливает баланс при создании объекта
    : balance(initialBalance)
    {
    }

    void deposit(double amount) // пополняет счёт
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Пополнение: " << amount << ". Новый баланс: " << balance << endl;
        }
        else
            cout << "Сумма пополнения должна быть положительной." << endl;
    }

    void withdraw(double amount) // снимает деньги, если хватает средств
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Снятие: " << amount << ". Остаток счёта: " << balance << endl;
        }
        else
            cout << "Недостаточно средств для снятия." << endl;
    }

    double getBalance() // возвращает текущий баланс
    {
        return balance;
    }

private:
    double balance;
};
//---------------------------------------------------------------------------------------------
class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(double initialBalance, double rate)
    : BankAccount(initialBalance), interestRate(rate)
    {
    }

    void applyInterest() // начисляет проценты
    {
        double interest = getBalance() * (interestRate / 100);
        deposit(interest); // начисляем проценты как пополнение
        cout << "Начислены проценты: " << interest << ". Новый баланс: " << getBalance() << endl;
    }

private:
    double interestRate; // процентная ставка
};
//---------------------------------------------------------------------------------------------
class CurrentAccount : public BankAccount
{
public:
    CurrentAccount(double initialBalance, double limit)
    : BankAccount(initialBalance), overdraftLimit(limit)
    {
    }

    void withdraw(double amount)
    {
        if (amount > 0 && (getBalance() + overdraftLimit) >= amount)
        {
            // Можно снимать даже при уходе в минус, но в пределах лимита
            double newBalance = getBalance() - amount;
            // Вызов базового метода для обновления баланса
            deposit(-amount); // уменьшить баланс
            cout << "Снятие: " << amount << ". Остаток на счете: " << getBalance() << endl;
        }
        else
            cout << "Превышен кредитный лимит." << endl;
    }

private:
    double overdraftLimit;
};
//---------------------------------------------------------------------------------------------
int main() 
{
    setlocale(LC_ALL, "ru");

    SavingsAccount mySave(1000, 5);  // создание сберегательного счета с 1000 рублей и 5% годовых

    CurrentAccount myCurrent(500, 200);  // создание текущего счета с 500 рублями и кредитным лимитом 200 рублей 

    mySave.deposit(500);      // пополнение сберегательног осчета на 500 рублей
    myCurrent.deposit(300);   // пополнение текущего счета на 300 рублей

    mySave.withdraw(1200);    // снятие 1200 рублей с сберегательного счета
    myCurrent.withdraw(800);  // снятие 800 рублей с текущего счета (уходим в минус)

    mySave.applyInterest();   // применение процентов к сберегательному счету

    // Итоговый баланс
    cout << "Сберегательный: " << mySave.getBalance() << endl;
    cout << "Текущий: " << myCurrent.getBalance() << endl;

    return 0;
}
//---------------------------------------------------------------------------------------------