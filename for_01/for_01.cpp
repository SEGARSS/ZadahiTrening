/*� �������� ��������� �������� �����-�� ���������� �����������.
���������� ���������� ������������ ������ ����� ������:
������� ������� �������� �������� �� ����,
������ ������� ������� ����������
� � ����� �������� ������� ������ �������� � ������ �������� �� ���,
� ��� �� ��������� ������� ������� �����������.*/

#include<iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(0));


	int pipl = 0;
	int voz = 0;
	int vozMin = 100; //��� ������ ������������ ���������� ���
	int vozMax = 0;
	int VozSred = 0;
	int vozOb = 0; //����� ����� ��� ������� �������� ��������.
	cout << "������� ����� �������� ���?:" << endl;
	cout << "������� ����������: ";
	cin >> pipl;

	for (int i = 0; i < pipl; i++)
	{

		cout << "������� �������: " << i + 1 << " -�� ���������� - ";
		cin >> voz;

		if (voz > vozMax)
			vozMax = voz;
		if (voz < vozMin)
			vozMin = voz;
		vozOb += voz;

	}

	VozSred = vozOb / pipl;

	cout << "������� ������� ���� ���������: - " << voz << endl;
	cout << "����� �������: - " << vozMax << endl;
	cout << "���� �������: - " << vozMin << endl;

	return 0;
}
/*
for (int j = 0; j <= i; j++)
{
	cout << "������� ������� ������� ����������" << endl;
	cin >> voz;
	j = voz;
	cout << " ������� ����� ���������� ���: " << j;
}
*/