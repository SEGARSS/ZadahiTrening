#include <iostream>
#include <vector>
#include <string>
#include <map>

// ������� ���� ������ �� ������������ - ����������� ��� ������ - ������� ������������� 

/*
������� �����: 5
������� �������: code
������� ���������: Hello, my name is Igor
���� ���������: ahdfbajsldflsadfkljhasdf
������� �������: decode
������� ���������: ksdjhgflkjdfshgklhdsf
���� ���������: pognali pit pivo
������� �������: test
������� ���������
������� �������:
������� �������: exit
*/

std::map<char /*��������*/, char /*����*/> cezar;
std::map<char /*����*/, char /*��������*/> deshifr;

code()
{

}

decode()
{

}


int main()
{
    setlocale(LC_ALL, "ru");

    int sdvig;
    std::string cod;
    std::string soob;

    std::cout << "������� �����: ";
    std::cin >> sdvig;

    for (char c = 'a'; c <= 'z'; c++)
    {
        char c_2 = c + sdvig;
        cezar[c] = c_2;
        deshifr[c_2] = c;
    }

    while (true)
    {
        std::cout << "������� �������: ";
        std::cin >> cod;
        std::cin.ignore();

        if (cod == "code")
        {
            std::cout << "������� ���������: ";
            std::getline(std::cin, soob);
            //std::cin >> soob;
            std::cout << "���� ���������: ";
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
            std::cout << std::endl;
        }
        else if (cod == "decode")
        {
            std::cout << "������� ���������: ";
            std::getline(std::cin, soob);
            //std::cin >> soob;
            std::cout << "���� ���������: ";
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
            std::cout << std::endl;

        }
        else if (cod == "exit")
        {
            break;
        }
        else
        {
            std::cout << "�������� �������!\n";
            continue;
        }

    }

    /*
        std::string vod;
        std::string msg;

        std::cout << "������ ����� ��� ���������� � �����������: - ";
        std::cin >> vod;

        for (auto z : vod)
        {
            if (cezar.contains(z))
            {
                //std::cout << cezar[z];

                //
                msg += cezar[z];
                //std::cout << msg;
            }
            else
            {
                //std::cout << z;

                //std::string msg;
                msg += z;
                //std::cout << msg;
            }
        }


        std::cout << msg;
        std::cout << std::endl;

        //std::cout << "������ ����� ��� �����������: - ";
        //std::cin >> vod;

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
     */
    return 0;
}