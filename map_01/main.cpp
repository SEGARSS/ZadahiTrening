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
    bibl["������"].push_back(Book({ "�����_20", "�������", 100 }));
    bibl["������"].push_back(Book({ "�����_10", "�����", 200 }));
    bibl["������"].push_back(Book({ "�����_01", "�������", 300 }));
    bibl["��������"].push_back(Book({ "�����_09", "�������", 400 }));

    return bibl;
}
//---------------------------------------------------------------------------------------------------
void printAutorBooks(std::map<std::string, std::vector<Book>> &info)
{
    for (auto& item : info)
    {
        /*��� ������ ��� ���� �������� �� ����� - std::map<std::string, std::vector<Book>> &info*/
        std::cout << item.first << std::endl; // item.first - �������� - std::string
        for (const Book& buks : item.second) // item.second - �������� - std::vector<Book>
        {
            std::cout << "   - " << buks.autor << " " << buks.name << ", " << " ���������� ��������: - " << buks.str << std::endl;
        }
    }

    //������ ������ ���������� ������ ������� ����.
    /*    
    for (auto& item : info)
    {
        std::cout << item.first << std::endl;
        //for (const Book& buks : item.second)
        for (int i = 0; i < info.size(); ++i)
        {
            std::cout << "   - " << item.second[i].autor << " " << item.second[i].name << ", " << " ���������� ��������: - " << item.second[i].str << std::endl;
        }
    }
    */
}
//---------------------------------------------------------------------------------------------------
//bool findAutor(std::map<std::string, std::vector<Book>> info_, std::string autor)
//{
//    for (auto& item : info_)
//    {
//        for (const Book& buks : item.second)
//        {
//            if (buks.autor == autor)
//            {
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//--------------------------------------------------------------------------------------------------- 
bool findAutor(std::map<std::string, std::vector<Book>> &info_, std::string autor)
{
    if (info_.contains(autor)) // ��������������� ���� ���������������� �������(���������)
    {
        return true;
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
