/*�������� �������� �����**
�������� ��������� �� C++, 
������� ����������� � ������������ ����� ����� � ������� ��������� � ���, 
�������� �� ����� ������, �������� ��� ����.*/
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int a;

	cout << "������ �� ��������, �������� �� �������� ���� ����� ������!" << endl;

	do
	{
		cout << "������� �����: ";
		cin >> a;

		if (a <= 0)
		{
			cout << "������! 0 ��������� �� �������� ���������!" << endl;
		}
		else if (a % 2 == 0)
		{
			cout << "�����: " << a << " ������.";
		}
		else
		{
			cout << "�����: " << a << " �� ������.";
		}
	}
	while (a == 0);


	return 0;
}