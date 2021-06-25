#include <iostream>
using namespace std;
class construct
{
private:
    int x, y;

public:
    construct()
    {
        x = 11;
        y = 20;
    }
    void display()
    {
        cout << "the value of x is " << x << endl
             << "the value of y is " << y << endl;
    }
};
int main()
{
    construct t;
    t.display();
    return 0;
}