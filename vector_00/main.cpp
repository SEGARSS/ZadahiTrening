#include <iostream>
#include <vector>

using namespace std;

/*
1. ������������ � ������������ � ������� 10 �����
2. ����� ���� ��� ������������ ���� ����� ���������� ���� ��� ����� � ������� ��� ���
3. ���������� � ������ ����� ������ ���� ��� ��� �� ���� � �������
4. �������� ���������� ������� ����� ����� ������� �����
*/

int main()
{
	setlocale(LC_ALL, "ru");

	vector <int> numbers;
	int n = 5;

	cout << "������� 5 �����:\n";

	for (int i = 0; i < n; i++)
	{		
		int input;
		cin >> input;	
		bool find = false;

		for (int j = 0; j < numbers.size(); j++) 
		{
			if (input == numbers[i])
			{
				find = true;				
			}			
		}

		if (find == false)
		{
			numbers.push_back(input);
			cout << numbers;
		}
		cout << endl;		
	}

	return 0;
}