#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer:";
    cin >> n;
    if (n > 0 || n < 0)
    {
        if (n % 2 == 0)
        {
            cout << n << "It is Even Number!!" << endl;
        }
        else
        {
            cout << n << "It is Odd Number!!" << endl;
        }
    }
    else
    {
        cout << "The integer is zero and it is neither even nor odd!!" << endl;
    }
    return 0;
}