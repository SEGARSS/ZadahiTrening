/*
�������� ��������� �������� ������.
������������ ����� �� ���� ������ 3 �������.
*/

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");

	string p; // ������
	int attempts = 3; // ���������� ������� �����

	do 
	{
		cout << "������� ������ ��� ����� � �������! � ��� �������� " << attempts << " �������." << endl;
		cin >> p;

		if (p == "pasword") 
		{
			cout << "������ ����� �����" << endl;
			break; // ����� �� ����� ��� ���������� ����� ������
		}
		else 
		{
			attempts--; // ��������� ���������� �������

			if (attempts == 0) 
			{
				cout << "�� ��������� ��� �������, ������� ����� ��������������!" << endl;
			}
		}
	} while (attempts > 0);

	return 0;
}