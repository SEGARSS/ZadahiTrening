#include <iostream>
#include <vector>

using namespace std;

/*
1. ������ ������ ����� �����, ����� � ���������� n ��������� � ������ �� �� �����.
2. ��������� ������� ��������
3. ��� ������ �� n ����� �����. ����� � ������ ����� ���� ���������.
*/

int main() 
{
    int sum = 0;
    int n;
    cin >> n;

    vector<int> alem(n);

    for (int i = 0; i < n; i++)
    {
        cin >> alem[i];
        sum += alem[i];
    }        

    for (int i = 0; i < alem.size(); i++)
    {
        cout << alem[i] << " ";        
    }

    cout << endl;
    cout << sum;

    return 0;
}