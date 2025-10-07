#include <iostream>
#include <vector>
#include <string>
#include <map>

// сделать ввод строки от пользователя - зашифровать эту строку - вывести зашифрованную 

/*
Введите сдвиг: 5
Введите команду: code
Введите сообщение: Hello, my name is Igor
Ваше сообщение: ahdfbajsldflsadfkljhasdf
Введите команду: decode
Введите сообщение: ksdjhgflkjdfshgklhdsf
Ваше сообщение: pognali pit pivo
Введите команду: test
Команда неизвесна
Введите команду:
Введите команду: exit
*/

//----------------------------------------------------------------------------------------
class Cezar
{
public:

    Cezar()
    {
        std::map<char /*оригинал*/, char /*шифр*/> cezar;
        std::map<char /*шифр*/, char /*оригинал*/> deshifr;
    }

    void Shifr()
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            char c_2 = c + sdvig;
            cezar[c] = c_2;
            deshifr[c_2] = c;
        }
    }
    void code(std::string soob)
    {
        for (auto z : soob)
        {
            if (cezar.contains(z))
            {
                std::cout << cezar[z];
            }
            else
            {
                std::cout << z;
            }
        }
    }
    void decode(std::string soob)
    {
        for (auto r : soob)
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
    }   

    std::map<char /*оригинал*/, char /*шифр*/> cezar;
    std::map<char /*шифр*/, char /*оригинал*/> deshifr;
    int sdvig;
    
};
//----------------------------------------------------------------------------------------
int main()
{
    setlocale(LC_ALL, "ru");

    Cezar c;   

    std::string cod; 
    std::string soob;

    std::cout << "Введите сдвиг: ";
    std::cin >> c.sdvig;

    c.Shifr();

    while (true)    
    {
        
        std::cout << "Введите команду: ";
        std::cin >> cod;
        std::cin.ignore();

        if (cod == "code")
        {  
            std::cout << "Введите сообщение: ";
            std::getline(std::cin, soob);
            std::cout << "Ваше сообщение: ";
            c.code(soob);
            std::cout << std::endl;
        }
        else if (cod == "decode")
        {   
            std::cout << "Введите сообщение: ";
            std::getline(std::cin, soob);
            std::cout << "Ваше сообщение: ";
            c.decode(soob);
            std::cout << std::endl;
        }
        else if (cod == "exit")
        {
            break;
        }
        else
        {
            std::cout << "Неверная команда!\n";
            continue;
        }
    }
    return 0;
}
//----------------------------------------------------------------------------------------