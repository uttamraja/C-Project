#include <iostream>
using namespace std;

class Construct
{
    int id;
    string name;
    float salary;

public:
    Construct()
    {
        id = 0;
        name = "Default";
        salary = 0;
    }
    Construct(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    Construct(Construct &c1)
    {
        id = c1.id;
        name = c1.name;
        salary = c1.salary;
    }
    Construct(int id, string name)
    {
        this->id = id;
        this->name = name;
        salary = 1200;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    void showData()
    {
        cout << "Name :" << name << "\nId :" << id << "\nsalary :" << salary << endl;
    }
};

int main()
{
    Construct c1;

    Construct c2(2, "Godatta Prasad", 547.82);

    Construct c3(c2);

    Construct c4(3, "Gomaney");

    c1.setId(4);

    c4.setSalary(3447.878);

    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();

    system("Pause");
    return 0;
}