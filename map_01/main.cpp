#include <iostream>
#include <vector>
#include <string>
#include <map>
/*

    Book
        - автор
        - имя
        - сколько страниц


    сделать функцию createMap (создает библиотеку и добавляет туда 4 книги с разными авторами)

    findAutor - сделать функцию, которая возвращает true или false и проверяет есть ли конкретный автор в нашей библиотеке

    printAutorBooks - сделать функцию, которая ничего не возвращает, но выводит на экран названия книг и сколько в них страниц конкретного автора


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
    bibl["Писака"].push_back(Book({ "Книга_20", "История", 100 }));
    bibl["Гуляка"].push_back(Book({ "Книга_10", "Поход", 200 }));
    bibl["Леняка"].push_back(Book({ "Книга_01", "Лежакот", 300 }));
    bibl["Пройдоха"].push_back(Book({ "Книга_09", "Пофигад", 400 }));

    return bibl;
}
//---------------------------------------------------------------------------------------------------
void printAutorBooks(std::map<std::string, std::vector<Book>> &info)
{
    for (auto& item : info)
    {
        /*Как понять что куда попадает из этого - std::map<std::string, std::vector<Book>> &info*/
        std::cout << item.first << std::endl; // item.first - попадает - std::string
        for (const Book& buks : item.second) // item.second - попадает - std::vector<Book>
        {
            std::cout << "   - " << buks.autor << " " << buks.name << ", " << " Количество странниц: - " << buks.str << std::endl;
        }
    }

    //Второй пример реализации записи которая выше.
    /*    
    for (auto& item : info)
    {
        std::cout << item.first << std::endl;
        //for (const Book& buks : item.second)
        for (int i = 0; i < info.size(); ++i)
        {
            std::cout << "   - " << item.second[i].autor << " " << item.second[i].name << ", " << " Количество странниц: - " << item.second[i].str << std::endl;
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
    if (info_.contains(autor)) // Непосредственно ищем целеноправленный элемент(контейнер)
    {
        return true;
    }

    return false;
}
//---------------------------------------------------------------------------------------------------
int main()
{
    setlocale(LC_ALL, "ru");

    std::map<std::string /*Номер книги.*/, std::vector<Book> /*Данные об книжке*/> bibl = createMap();    

    printAutorBooks(bibl);

    bool find = findAutor(bibl, "Леняка");
    if (find)
    {
        std::cout << "нашли\n";
    }
    else
    {
        std::cout << "НЕ нашли\n";
    }

    return 0;
}
