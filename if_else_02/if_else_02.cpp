/*�������� ���������, � ������� ������������ ������ ����� �� 1 �� 100.
����������� ��������� �������� if, ����� ������� ���������,
��� ����� ��������� � �������� ����� ���������.
� ����� ��� ���������� ����� ������� ����������,
�������� �� ��������� ����� ������, ������ ��� ������ 50.
� �������� ��������� �� �������.*/
#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "������� ����� �� 1 �� 100: ";
	cin >> a;

	if ((a >= 1) && (a <= 100))
	{
		if (a < 50)
		{
			cout << "����� " << a << " ������ 50" << endl;
		}
		else if (a > 50)
		{
			cout << "����� " << a << " ������ 50" << endl;
		}
		else
		{
			cout << "����� " << a << " ����� 50" << endl;
		}

	}
	else
	{
		cout << "�� ����� �������� �����!" << endl;
	}
	return 0;
}

/*���� �� ����� ������ ��������������� ��������, �� ������� ��� if, ����� else if � ��������� else.*/