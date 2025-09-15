/*
Написать программу проверки пароля.
Пользователя даётся на ввод пароля 3 попытки.
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");

	string p; // Пароль
	int attempts = 3; // Количество попыток ввода

	do 
	{
		cout << "Введите пароль для входа в систему! У вас осталось " << attempts << " попыток." << endl;
		cin >> p;

		if (p == "pasword") 
		{
			cout << "Пароль введён верно" << endl;
			break; // Выход из цикла при правильном вводе пароля
		}
		else 
		{
			attempts--; // Уменьшаем количество попыток

			if (attempts == 0) 
			{
				cout << "Вы исчерпали все попытки, система будет заблокированна!" << endl;
			}
		}
	} while (attempts > 0);

	return 0;
}