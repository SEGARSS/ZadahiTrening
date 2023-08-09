/*������� ������ ���� int �� 10 ��������� � ��������� ��� ���������� ������� �� 7 �� 14.
����� ���������� ������������ ��� �����, ������� ������  ������:
�� ��������� �������� ������ 10.
��������  �  ������ �������� ����� 12: 12 � 10 = 2. �������� � ��� ������ 2 ��������� ����� ��������*/

#include<iostream>
#include<ctime>
using namespace std;

int FillArray(int arr[], int size) // ��������� ������.
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 8 + 7;
	}
	return 0;
}

int PrintArray(int arr[], int size) // ������� ������ �� �����
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

int ArrayMiTen(int arr[], int size) /* ��������� �������, ���� �������� ������ ��� ����� 10,
										�������� 10 � ����� ����� �������� � ������ �������.*/
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

	FillArray(arr, size); //���������

	PrintArray(arr, size);//������� ��������

	ArrayMiTen(arr, size);//�������� 10

	PrintArray(arr, size);//������� �������� ��������� ���������� ������� �������

	return 0;
}