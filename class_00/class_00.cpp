/*
������:
�������� ������� ���������� ������ � ���������:
    - ���������� (deposit)
    - ������ (withdraw)
    - �������������� ������� � ������������������ ������

��������� �������:
BankAccount � ������� ����� � �������� � �������� deposit() � withdraw()
SavingsAccount � ��������� BankAccount, ��������� ���������� ������ � ����� applyInterest()
CurrentAccount � ��������� BankAccount, ��������� ��������� ����� � ��������� withdraw()

����� BankAccount (������� ���������� ����)
- ���������� balance (�������� - private) � �������� ������ �� ������� ���������
- ����������� BankAccount(double initialBalance) � ������������� ������ ��� �������� �������
- ����� deposit(double amount) � ��������� ����
- ����� withdraw(double amount) � ������� ������, ���� ������� �������
- ����� getBalance() � ���������� ������� ������


����� SavingsAccount (������ ��������������� �����)
- ��������� BankAccount (public ������������)
- ���������� interestRate � ���������� ������
- ����� applyInterest() � ��������� ��������


����� CurrentAccount (������� ���� � ��������� �������)
- ��������� BankAccount
- ��������� overdraftLimit � ��������� �����
- ����� withdraw() ��������� ������� ������ ���� ��� ����� � �����, �� � �������� ������
*/

#include<iostream>
#include<string>
using namespace std;

//---------------------------------------------------------------------------------------------
class BankAccount
{
public:
    BankAccount(double initialBalance) // ������������� ������ ��� �������� �������
    : balance(initialBalance)
    {
    }

    void deposit(double amount) // ��������� ����
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "����������: " << amount << ". ����� ������: " << balance << endl;
        }
        else
            cout << "����� ���������� ������ ���� �������������." << endl;
    }

    void withdraw(double amount) // ������� ������, ���� ������� �������
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "������: " << amount << ". ������� �����: " << balance << endl;
        }
        else
            cout << "������������ ������� ��� ������." << endl;
    }

    double getBalance() // ���������� ������� ������
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

    void applyInterest() // ��������� ��������
    {
        double interest = getBalance() * (interestRate / 100);
        deposit(interest); // ��������� �������� ��� ����������
        cout << "��������� ��������: " << interest << ". ����� ������: " << getBalance() << endl;
    }

private:
    double interestRate; // ���������� ������
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
            // ����� ������� ���� ��� ����� � �����, �� � �������� ������
            double newBalance = getBalance() - amount;
            // ����� �������� ������ ��� ���������� �������
            deposit(-amount); // ��������� ������
            cout << "������: " << amount << ". ������� �� �����: " << getBalance() << endl;
        }
        else
            cout << "�������� ��������� �����." << endl;
    }

private:
    double overdraftLimit;
};
//---------------------------------------------------------------------------------------------
int main() 
{
    setlocale(LC_ALL, "ru");

    SavingsAccount mySave(1000, 5);  // �������� ��������������� ����� � 1000 ������ � 5% �������

    CurrentAccount myCurrent(500, 200);  // �������� �������� ����� � 500 ������� � ��������� ������� 200 ������ 

    mySave.deposit(500);      // ���������� �������������� ������ �� 500 ������
    myCurrent.deposit(300);   // ���������� �������� ����� �� 300 ������

    mySave.withdraw(1200);    // ������ 1200 ������ � ��������������� �����
    myCurrent.withdraw(800);  // ������ 800 ������ � �������� ����� (������ � �����)

    mySave.applyInterest();   // ���������� ��������� � ��������������� �����

    // �������� ������
    cout << "��������������: " << mySave.getBalance() << endl;
    cout << "�������: " << myCurrent.getBalance() << endl;

    return 0;
}
//---------------------------------------------------------------------------------------------