#include <iostream>
using namespace std;

int main()
{
    float sum, a, b, prod, difference, div;
    cout << "Enter First number:";
    cin >> a;
    cout << "Enter the second num:";
    cin >> b;
    sum = a + b;
    prod = a * b;
    difference = a - b;
    div = a / b;
    cout << "The sum is:" << sum << endl
         << "The difference is:" << difference << endl
         << "The multiplication is:" << prod << endl
         << "The division is:" << div << endl;
    if (a > div && prod > difference)
    {
        cout << "You are clear in operators" << endl;
    }
    return 0;
}