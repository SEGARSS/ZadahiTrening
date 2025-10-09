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

    Cezar(int sdvig_)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            char c_2 = c + sdvig_;
            cezar[c] = c_2;
            deshifr[c_2] = c;
        }

        for (char c = 'A'; c <= 'Z'; c++)
        {
            char c_2 = c + sdvig_;
            cezar[c] = c_2;
            deshifr[c_2] = c;
        }
    }

    std::string code(std::string& soob)
    {
        std::string msg;
        for (auto z : soob)
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

        return msg;
    }

    std::string decode(std::string& soob)
    {
        std::string msg;
        for (auto r : soob)
        {
            if (deshifr.contains(r))
            {
                msg += deshifr[r];
            }
            else
            {
                msg += r;
            }
        }
        return msg;
    }

    std::map<char /*оригинал*/, char /*шифр*/> cezar;
    std::map<char /*шифр*/, char /*оригинал*/> deshifr;
};
//----------------------------------------------------------------------------------------
int main()
{
    setlocale(LC_ALL, "ru");

    int sdvig;

    std::string cod;
    std::string soob;    

    std::cout << "Введите сдвиг: ";
    std::cin >> sdvig;

    Cezar c(sdvig);

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
            std::cout << c.code(soob) << std::endl;
        }
        else if (cod == "decode")
        {
            std::cout << "Введите сообщение: ";
            std::getline(std::cin, soob);
            std::cout << "Ваше сообщение: ";
            std::cout << c.decode(soob) << std::endl;
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