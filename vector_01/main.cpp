#include <iostream>
#include <vector>

using namespace std;

/*
1. Создай вектор целых чисел, введи с клавиатуры n элементов и выведи их на экран.
2. Заполнить данными элементы
3. Дан вектор из n целых чисел. Найди и выведи сумму всех элементов.
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