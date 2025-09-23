
#include <iostream>
#include <vector>
#include <string>


//-------------------------------------------------------------------------------------------------
class Animal
{
public:
    Animal(std::string name_, int voz_)
    {
        name = name_;
        voz = voz_;
    }

    virtual void voice() = 0;

    std::string name;
    int voz;


};
//---------------------------------------------------------------------------------------
class Cat : public Animal
{
public:
    Cat(std::string name_, int voz_)
        : Animal(name_, voz_)
    {
    }

    void voice() override
    {
        std::cout << "мяу" << std::endl;
    }

};
//-------------------------------------------------------------------------------------------------
class Dog : public Animal
{
public:
    Dog(std::string name_, int voz_)
        : Animal(name_, voz_)
    {
    }

    void voice() override
    {
        std::cout << "гав" << std::endl;
    }

};
//-------------------------------------------------------------------------------------------------
class Parrot : public Animal
{
public:
    Parrot(std::string name_, int voz_)
        : Animal(name_, voz_)
    {
    }

    void voice() override
    {
        std::cout << "чирик-чирик" << std::endl;
    }

};
//-------------------------------------------------------------------------------------------------
std::vector<Animal*> createVector()
{
    std::vector<Animal*> v;
    v.push_back(new Cat("Рыся", 5));
    v.push_back(new Dog("Хас", 4));
    v.push_back(new Parrot("Кеша", 7));

    return v;
}
//-------------------------------------------------------------------------------------------------
void callAnimalsVoice(std::vector<Animal*> v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        v[i]->voice();
    }
}
//-------------------------------------------------------------------------------------------------
bool findNameInVector(std::vector<Animal*> v, std::string name)
{
    //bool poisk = false;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i]->name == name)
        {
            //poisk = true;
            std::cout << "Такое животное есть." << std::endl;
        }
        else
        {
            //poisk = false;
            std::cout << "Такова животного нет." << std::endl;
        }
    }

    return 0;
}
//-------------------------------------------------------------------------------------------------
int main()
{
    std::setlocale(LC_ALL, "ru");
    //findNameInVector - ищет в векторе животное по кличке - возвращает - true есть, false - нет

    std::vector<Animal*> v = createVector();

    callAnimalsVoice(v);

    bool isVectorIncludeName = findNameInVector(v, "Хас");

    return 0;
}
//-------------------------------------------------------------------------------------------------