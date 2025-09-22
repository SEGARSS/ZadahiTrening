
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
        std::cout << "���" << std::endl;
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
        std::cout << "���" << std::endl;
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
        std::cout << "�����-�����" << std::endl;
    }

};
//-------------------------------------------------------------------------------------------------
std::vector<Animal*> createVector()
{
    std::vector<Animal*> v;
    v.push_back(new Cat("����", 5));
    v.push_back(new Dog("���", 4));
    v.push_back(new Parrot("����", 7));

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
int main()
{
    //findNameInVector - ���� � ������� �������� �� ������ - ���������� - true ����, false - ���

    std::vector<Animal*> v = createVector();

    callAnimalsVoice(v);

    //bool isVectorIncludeName = findNameInVector(v, "�����");

    return 0;
}
//-------------------------------------------------------------------------------------------------