/*�������� ���������,
� ������� �������� ��� �����,
� ��������� ��������, ������ �� ������ ����� ������� ��� ������ ��� ��� �����.
��� �������� ����������� ��������� ��������.*/
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
	/*
	if (a > b)
	{
		cout << "����� " << a << " ������ " << b << endl;
	}
	else if (a == b)
	{
		cout << "����� " << a << " ����� " << b << endl;
	}
	else
	{
		cout << "����� " << a << " ������ " << b << endl;
	}
	*/
	/*�������������� ������� ������� � ������� ���������� ���������*/
	cout << (a > b ? "a > b" : (a < b ? "a < b" : "a=b")) << endl;
	/*�������, ������� true, ���� false, � �� ������� ��� �������������� �������,
	? - ��� ������, ������ � : - ��� ����. ������ �� ������� ��� ���� a > b �� ��� ������ (?) ���
	��������� ������� � ��������� (a < b ? "a < b" : "a=b") ��� ������ ���� � ������ b ��� �����
	�����.*/
	return 0;
}