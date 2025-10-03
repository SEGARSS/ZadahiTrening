#include <iostream>
#include <vector>
#include <string>
#include <map>


/*Занятия.*/
int main()
{
    // абвгде ... 
    // 1 
    // 
    // абв -> бвг
    // а -> б
    // б -> в
    // в -> г

    // бвг -> абв


    std::map<char /*оригинал*/, char /*шифр*/> cezar;
    std::map<char /*шифр*/, char /*оригинал*/> deshifr;

    int sdvig = 1;
    // char  0 - 255
    for (char c = 'a'; c <= 'z'; ++c)
    {
        //std::cout << c;
        char c_2 = c + sdvig; // a -> b || b -> a
        //std::cout << c_2;
        //std::cout << std::endl;

        cezar[c] = c_2;
        deshifr[c_2] = c;
    }

    //for (auto& item : cezar)
    //{
    //    std::cout << item.first << item.second << std::endl;
    //}

    std::string msg = "hello123   !!!!";


    for (auto c : msg)
    {
        if (cezar.contains(c))
        {
            std::cout << cezar[c];
        }
        else
        {
            std::cout << c;
        }
    }

    std::cout << std::endl;

    std::string shifr = "ifmmp123   !!!!";

    for (auto c_2 : shifr)
    {
        if (deshifr.contains(c_2))
        {
            std::cout << deshifr[c_2];
        }
        else
        {
            std::cout << c_2;
        }
    }
    



    



    // abcde......



    // 1 доделать дефишратор - тебе нужно просто расшифровать shifr
    



    return 0;
}