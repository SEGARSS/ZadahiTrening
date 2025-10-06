#include <iostream>
#include <vector>
#include <string>
#include <map>

// сделать ввод строки от пользователя - зашифровать эту строку - вывести зашифрованную 

int main()
{
	setlocale(LC_ALL, "ru");

	std::map<char /*оригинал*/, char /*шифр*/> cezar;
	std::map<char /*шифр*/, char /*оригинал*/> deshifr;

	int sdvig = 1;
	for (char c = 'a'; c <= 'z'; c++)
	{
		char c_2 = c + sdvig;
		cezar[c] = c_2;
		deshifr[c_2] = c;
	}

	std::string vod;
	std::string msg;

	std::cout << "Ведите слово для зашифровки и расшифровки: - ";
	std::cin >> vod;

	for (auto z : vod)
	{
		if (cezar.contains(z))
		{	
			msg += cezar[z];		
		}
		else
		{		
			msg += z;
		}
	}

	std::cout << msg;
	std::cout << std::endl;

	for (auto r : msg)
	{
		if (deshifr.contains(r))
		{
			std::cout << deshifr[r];
		}
		else
		{
			std::cout << r;
		}
	}
	return 0;
}