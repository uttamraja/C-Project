#include <iostream>
using namespace std;
class student
{
private:
    char name[20], address[20];
    int roll;
    double percentage;

public:
    void input()
    {

        cout << "Enter name" << endl
             << "Roll No:" << endl
             << "address:" << endl
             << "percentage" << endl;
        cin >> name >> roll >> address >> percentage;
    }
    void display()
    {
        cout << "name=" << name << endl
             << "roll=" << roll << endl
             << "address=" << address << endl
             << "percentage=" << percentage << endl;
    }
    void result()
    {
        if (percentage < 40)
        {
            cout << "Study hard,you have failed!" << endl;
        }
        else
        {
            cout << "Congrats,you have passed!" << endl;
        }
    }
};
int main()
{
    student s1;
    s1.input();
    s1.display();
    s1.result();
    return 0;
}