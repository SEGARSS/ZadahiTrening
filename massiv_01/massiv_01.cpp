/*Создать массив типа int на 10 элементов и заполнить его случайными числами от 7 до 14.
После заполнения перезаписать все числа, которые больше  десяти:
от хранимого значение отнять 10.
Например  в  ячейке хранится число 12: 12 – 10 = 2. Записать в эту ячейку 2 Записывая новое значение*/

#include<iostream>
#include<ctime>
using namespace std;

int FillArray(int arr[], int size) // Заполняем массив.
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 8 + 7;
	}
	return 0;
}

int PrintArray(int arr[], int size) // Выводим массив на экран
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

int ArrayMiTen(int arr[], int size) /* Выполняем условие, если значение больше или равно 10,
										отнимаем 10 и ложим новое значение в ячейку массива.*/
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 10)
		{
			arr[i] -= 10;
		}
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int size = 10;
	int arr[size];

	FillArray(arr, size); //Заполняем

	PrintArray(arr, size);//Выводим исходный

	ArrayMiTen(arr, size);//Отнимаем 10

	PrintArray(arr, size);//Выводим конечный результат изменнёного массива массива

	return 0;
}