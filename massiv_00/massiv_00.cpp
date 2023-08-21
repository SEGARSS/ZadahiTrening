//Удалить в массиве все числа, которые повторяются более двух раз.

#include<iostream>
#include<ctime>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int size = 30;
	int arr[size];
	int countt[size] = { 0 };

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}

	for (int i = 0; i < size; i++)
	{
		countt[arr[i]]++;
	}

	for (int i = 0; i < size; i++)
	{
		cout << countt[arr[i]++] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int newSize = 0; // Новый размер массива после удаления
	for (int i = 0; i < size; i++)
	{
		if (countt[arr[i]] <= 2)
		{
			arr[newSize] = arr[i];
			newSize++;
		}
	}

	for (int i = 0; i < newSize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}

/*Разбери задачу эту с кемто!*/