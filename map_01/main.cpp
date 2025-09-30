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
    bibl["Книга_20"].push_back(Book({ "Писака", "История, ", 100 }));
    bibl["Книга_10"].push_back(Book({ "Гуляка", "Поход, ", 200 }));
    bibl["Книга_01"].push_back(Book({ "Леняка", "Лежакот, ", 300 }));
    bibl["Книга_09"].push_back(Book({ "Пройдоха", "Пофигад, ", 400 }));

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
            std::cout << "   - " << buks.autor << " " << buks.name << " Количество странниц: - " << buks.str << std::endl;
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
