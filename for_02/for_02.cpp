// �������� ���������, ������� ������� � ������� �� ����� ��� ������� ����� � ��������� �� 1 �� 100.

#include<iostream>
using namespace std;

//-----------------------------------------------------------------------
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i <= n / 2 ; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}
//-----------------------------------------------------------------------
int main ()
{
	setlocale(LC_ALL,"ru");

	cout << "������� ����� �� 1 �� 100" << endl;

	for (int i = 2; i <= 100; i++)
	{
		if (isPrime(i))
			cout << i << " ";
	}
	cout << endl;

	return 0;
}