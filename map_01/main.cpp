#include <iostream>
#include <vector>
#include <string>
#include <map>
/*

    Book
        - �����
        - ���
        - ������� �������


    ������� ������� createMap (������� ���������� � ��������� ���� 4 ����� � ������� ��������)

    findAutor - ������� �������, ������� ���������� true ��� false � ��������� ���� �� ���������� ����� � ����� ����������

    printAutorBooks - ������� �������, ������� ������ �� ����������, �� ������� �� ����� �������� ���� � ������� � ��� ������� ����������� ������


    */
//---------------------------------------------------------------------------------------------------
struct Book
{
    std::string autor;
    std::string name;
    int str;
};
//---------------------------------------------------------------------------------------------------
std::map<std::string, std::vector<Book>> createMap()
{
    std::map<std::string, std::vector<Book>> bibl;
    bibl["�����_20"].push_back(Book({ "������", "�������, ", 100 }));
    bibl["�����_10"].push_back(Book({ "������", "�����, ", 200 }));
    bibl["�����_01"].push_back(Book({ "������", "�������, ", 300 }));
    bibl["�����_09"].push_back(Book({ "��������", "�������, ", 400 }));

    return bibl;
}
//---------------------------------------------------------------------------------------------------
void printAutorBooks(std::map<std::string, std::vector<Book>> info)
{
    for (auto& item : info)
    {
        std::cout << item.first << std::endl;
        for (const Book& buks : item.second)
        {
            std::cout << "   - " << buks.autor << " " << buks.name << " ���������� ��������: - " << buks.str << std::endl;
        }
    }
}
//---------------------------------------------------------------------------------------------------
bool findAutor(std::map<std::string, std::vector<Book>> info_, std::string autor)
{
    for (auto& item : info_)
    {
        for (const Book& buks : item.second)
        {
            if (buks.autor == autor)
            {
                return true;
            }
        }
    }

    return false;
}
//---------------------------------------------------------------------------------------------------
int main()
{
    setlocale(LC_ALL, "ru");

    std::map<std::string /*����� �����.*/, std::vector<Book> /*������ �� ������*/> bibl = createMap();    

    printAutorBooks(bibl);

    bool find = findAutor(bibl, "������");
    if (find)
    {
        std::cout << "�����\n";
    }
    else
    {
        std::cout << "�� �����\n";
    }

    return 0;
}
