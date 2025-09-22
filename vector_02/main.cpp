#include <iostream>
#include <vector>

//Нужно объяснение!
int main()
{
	std::setlocale(LC_ALL, "ru");

	std::cout << "Веддите количество элементов векторе - ";
	int n;
	std::cin >> n; //Указываем количество элементов векторе.
	std::vector<int> alem(n);
	
	int min = 999;
	int max = 0;

	for (int i = 0; i < alem.size(); i++)
	{
		std::cin >> alem[i]; //Заполняем данными элементы вектора.		
	}

	for (int i = 0; i < alem.size(); i++)
	{
		if (alem[i] < min)
		{
			min = alem[i];
		}
		if(alem[i] > max)
		{
			max = alem[i];
		}
	}

	for (int i = 0; i < alem.size(); i++)
	{
		std::cout << alem[i] << " ";
	}

	std::cout << std::endl;
	std::cout << min << "\n";
	std::cout << max;

	return 0;
}