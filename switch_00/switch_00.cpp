/*��������� ���������� �� ������.
������������ ������ ���������� ����� ��� ������
� � ���� �� ������ ������������,
��, ��� ������������� �� ���� ����.*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a;

	cout << "������� ����� ��� ������ ��� ��������� ��������������� ���������� ���:" << endl;
	cout << "1 - �����������: " << "\n" << "2 - �������: " << "\n" << "3 - �����: "
		<< "\n" << "4 - ������� " << "\n" << "5 - �������: " << "\n" << "6 - �������: " << "\n"
		<< "7 - �����������:" << "\n";
	cin >> a;



	switch (a)
	{
	case 1:
		cout << "����������� - ������ ������� ����.... (�����������)" << endl;
		break;
	case 2:
		cout << "������� - �� ����� ������� � ���� � ������....(� �������)" << endl;
		break;
	case 3:
		cout << "����� - ������ ��� �������... �������� � ������� � �����!" << endl;
		break;
	case 4:
		cout << "������� - ������������, ������� ��� ���� �� ����!" << endl;
		break;
	case 5:
		cout << "������� - �����!" << endl;
		break;
	case 6:
		cout << "������� - ����������!" << endl;
		break;
	case 7:
		cout << "����������� - ����������� ��������� ���������� �������...." << endl;
	default:
		cout << "��� ����� ����� ��� ������ ���! ������� �� ��������� ������!" << endl;
		break;
	}

}