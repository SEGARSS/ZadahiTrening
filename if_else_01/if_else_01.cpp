/*�������� ���������,
������� ���������� ������ ��� ����� ����� � ��������,
������� �� ������ ����� �� ������ ��� ������� (������ �� ������ �����).
������������� �������, ����� � �������� ������� ����� ����� ������ 0 (�� ���� �� ������ ������).
� ���� ������ ��������� ������ ���������, � ������ ��������� ����������.*/

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	int b;

	cout << "������� ��� �����:" << endl;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;

	if ((a != 0) && (b != 0))
	{
		if (a % b == 0)
		{
			cout << "����� " << a << " � " << b << " �������� ��� �������!" << endl;
		}
		else
		{
			cout << "����� " << a << " � " << b << " �������� c ��������!" << endl;
		}
	}
	else
	{
		cout << "�� 0 ������ ������!" << endl;

	}
}

