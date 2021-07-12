#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a numbers:"<<endl;
    cin >> a;
    cout<<"Enter second number:"<<endl;
    cin >> b;
    int calculate = 3;
    switch (calculate)
    {
    case 1:
        cout << "The addition of two numbers is:" << a + b << endl;
        break;
    case 2:
        cout << "The subtraction of two numbers is:" << a - b << endl;
        break;
    case 3:
        cout << "The multiplication of two numbers is:" << a * b << endl;
        break;
    case 4:
        cout << "The division of two numbers is:" << a / b << endl;
        cout << "The remainder is:" << a % b << endl;
        break;
    default:
        cout << "Enter valid numbers!" << endl;
    }
    return 0;
}