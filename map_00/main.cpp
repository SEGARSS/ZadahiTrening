#include <iostream>
#include <vector>
#include <string>
#include <map>


struct Book
{
    std::string autor;
    std::string name;
};

int main()
{

    //std::vector<int> v = { 9, 42, 777 };
    //for (const int& item : v)
    //{
    //    std::cout << item;
    //}

    std::vector<Book> bibl;
    bibl.push_back(Book({ "Auotor 2", "Kniga 2" }));
    bibl.push_back(Book({ "Auotor 1", "Kniga 1" }));
    bibl.push_back(Book({ "Auotor 2", "Kniga 3" }));

    //bool found = false;

    //for (const Book& tekBook : bibl)
    //{
    //    if (tekBook.autor == "Auotor 1")
    //    {
    //        std::cout << tekBook.name << std::endl;
    //        found = true;
    //        break;
    //    }
    //}

    //if (found == false)
    //{
    //    std::cout << "not found!!" << std::endl;
    //}

    //for (const Book& tekBook : bibl)
    //{
    //    //Book& tekBook = bibl[i];
    //    std::cout << tekBook.autor << " - " << tekBook.name << std::endl;
    //}

    std::map<std::string /*автор*/, std::vector<std::string> /*название*/> bibl_v2;
    bibl_v2["Auotor 2"].push_back("Kniga 2");
    bibl_v2["Auotor 1"].push_back("Kniga 1");
    bibl_v2["Auotor 2"].push_back("Kniga 3");
    bibl_v2["Auotor 2"].push_back("Kniga 4");
    bibl_v2["Auotor 3"].push_back("Kniga 999");
    bibl_v2["Auotor 3"].push_back("Kniga 7777");

    std::vector<std::string> knigi_autora7 = { "kn555", "kn64556" };
    bibl_v2["Auotor 7"] = knigi_autora7;

    bibl_v2["Auotor 7"].push_back("kn555");
    bibl_v2["Auotor 7"].push_back("kn64556");


    //if (bibl_v2.contains("Auotor 1") == true)
    //{
    //    std::cout << bibl_v2["Auotor 1"] << std::endl;
    //}
    //else
    //{
    //    std::cout << "not found!!" << std::endl;
    //}



    //std::pair<std::string, std::vector<std::string>>&/
    for (auto& item : bibl_v2)
    {
        std::cout << item.first << " - " << std::endl;
        for (const std::string& name : item.second)
        {
            std::cout << "   - " << name << std::endl;
        }
    }    

    return 0;
}