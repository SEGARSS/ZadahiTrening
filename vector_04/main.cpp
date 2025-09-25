#include <iostream>
#include <vector>
#include <string>


//-------------------------------------------------------------------------------------------------
class Human
{
public:
    Human(std::string name_, int voz_)
    {
        name = name_;
        voz = voz_;
    }

    virtual void greating() = 0;

    std::string name;
    int voz;
};
//-------------------------------------------------------------------------------------------------
class Professor : public Human
{
public:
    Professor(std::string name_, int voz_, std::string predmet_)
    : Human(name_, voz_)
    {
        predmet = predmet_;
    }

    void greating() override
    {
        std::cout << "Зовут - " << name << ", " << voz << " лет, " << " преподаёт - " << predmet << std::endl;
    }

    std::string predmet;
};
//-------------------------------------------------------------------------------------------------
class Student : public Human
{
public:
    Student(std::string name_, int voz_, int kurs_)
    : Human(name_, voz_)
    {
        kurs = kurs_;
    }

    void greating() override
    {
        std::cout << "Зовут - " << name << ", " << voz << " лет, " << kurs << " курс." << std::endl;
    }

    int kurs;
};
//-------------------------------------------------------------------------------------------------
std::vector<Human*> createHumans()
{
    std::vector<Human*> v;
    v.push_back(new Student("Serega", 35, 4));
    v.push_back(new Professor("Igor", 30, "програмирование_С++"));
    v.push_back(new Student("Uvasa", 20, 1));
    v.push_back(new Professor("Hurik", 50, "сварщик"));
    v.push_back(new Student("Petya", 21, 2));

    return v;
}
//-------------------------------------------------------------------------------------------------
void printHumansGreating(const std::vector<Human*> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i]->greating();
    }
}
//-------------------------------------------------------------------------------------------------
bool findHuman(std::vector<Human*> &v, const std::string &name)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]->name == name)
        {
            return true;
        }
    }

    return false;
}
//-------------------------------------------------------------------------------------------------
void printKolichestvoChelovek(std::vector<Human*> &v)
{
    std::cout << "Всего людей - " << v.size() << std::endl;
}
//-------------------------------------------------------------------------------------------------
int main()
{
    std::setlocale(LC_ALL, "ru");

    // Human
    //   Professor
    //   Student


    // name (имя) , age (возраст)
    // student - course (курс 1 - 4)
    // professor - predmet (математика, химия, история)

    // greating(приветствие)
    // student - Я "имя", мне %%% лет, я на %%% курсе
    // professor - Я профессор "имя", мне %%% лет, я преподаю %%%%%

    std::vector<Human*> v = createHumans();

    printHumansGreating(v); // выводит приветствия всех кто у меня в векторе

    printKolichestvoChelovek(v); /// 4 humans

    bool find = findHuman(v, "Uvasa");
    if (find)
    {
        std::cout << "нашли " << std::endl;
    }
    else
    {
        std::cout << "не нашли " << std::endl;
    }

    return 0;
}
//-------------------------------------------------------------------------------------------------

