#include <iostream>
#include <vector>
#include <string>

//-------------------------------------------------------------------------------------------------
class Human
{
public:
    Human(std::string name_, int voz_)
    {
        setName(name_);
        setVoz(voz_);
    }

    virtual void greating() = 0;

    std::string getName()
    {
        if (pol == true)
        {
            return "������ " + imya;
        }
        else
        {
            return "����� " + imya;
        }
    }


    void setName(std::string newName)
    {
        imya = newName;
    }

    void setVoz(int n)
    {
        if (n > 0 && n < 150)
        {
            voz = n;
        }
        else
        {
            std::cout << "������ �������� �������";
            throw false;
        }
    }
    int voz;
private:

    std::string imya;
    bool pol;
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
        std::cout << "����� - " << getName() << ", " << voz << " ���, " << " �������� - " << predmet << std::endl;
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
        std::cout << "����� - " << getName() << ", " << voz << " ���, " << kurs << " ����." << std::endl;
    }

    int kurs;
};
//-------------------------------------------------------------------------------------------------
std::vector<Human*> createHumans()
{
    std::vector<Human*> v;
    v.push_back(new Student("Sergey", 35, 4));
    v.push_back(new Professor("Igor", 30, "���������������_�++"));
    v.push_back(new Student("Uvasa", 20, 1));
    v.push_back(new Professor("Hurik", 50, "�������"));
    v.push_back(new Student("Petya", 21, 2));

    return v;
}
//-------------------------------------------------------------------------------------------------
void printHumansGreating(const std::vector<Human*>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i]->greating();
    }
}
//-------------------------------------------------------------------------------------------------
bool findHuman(std::vector<Human*>& v, const std::string& name)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]->getName() == name)
        {
            return true;
        }
    }

    return false;
}
//-------------------------------------------------------------------------------------------------
void printKolichestvoChelovek(std::vector<Human*>& v)
{
    std::cout << "����� ����� - " << v.size() << std::endl;
}
//-------------------------------------------------------------------------------------------------
int main()
{
    std::setlocale(LC_ALL, "ru");


    // Human
    //   Professor
    //   Student


    // name (���) , age (�������)
    // student - course (���� 1 - 4)
    // professor - predmet (����������, �����, �������)

    // greating(�����������)
    // student - � "���", ��� %%% ���, � �� %%% �����
    // professor - � ��������� "���", ��� %%% ���, � �������� %%%%%

    std::vector<Human*> v = createHumans();


    student stud("Misha", 11, 1);
    stud.setName("Misha 2");
    std::cout << stud.getName();


    printHumansGreating(v); // ������� ����������� ���� ��� � ���� � �������

    printKolichestvoChelovek(v); /// 4 humans

    bool find = findHuman(v, "Uvasa");
    if (find)
    {
        std::cout << "����� " << std::endl;
    }
    else
    {
        std::cout << "�� ����� " << std::endl;
    }

    return 0;
}
//-------------------------------------------------------------------------------------------------

