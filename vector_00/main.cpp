#include <iostream>
#include <vector>

using namespace std;

/*
1. запрашиваешь у пользователя с консоли 10 чисел
2. после того как пользователь ввел число проверяешь есть это число в векторе или нет
3. добавляешь в вектор число только если его еще не было в векторе
4. выводишь содержимое вектора после ввода каждого числа
*/

int main()
{
	setlocale(LC_ALL, "ru");

	vector <int> numbers;
	int n = 5;

	cout << "Введите 5 чисел:\n";

	for (int i = 0; i < n; i++)
	{		
		int input;
		cin >> input;	
		bool find = false;

		for (int j = 0; j < numbers.size(); j++) 
		{
			if (input == numbers[i])
			{
				find = true;				
			}			
		}

		if (find == false)
		{
			numbers.push_back(input);
			cout << numbers;
		}
		cout << endl;		
	}

	return 0;
}