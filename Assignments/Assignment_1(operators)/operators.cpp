#include <iostream>
using namespace std;

int main()
{
    float sum, num1, num2, product, difference, division;
    cout << "Enter First number:";
    cin >> num1;
    cout << "Enter the second num:";
    cin >> num2;
    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    division = num1 / num2;
    cout << "The sum is:" << sum << endl
         << "The difference is:" << difference << endl
         << "The multiplication is:" << product << endl
         << "The division is:" << division << endl;
    if (num1 > division && product > difference)
    {
        cout << "You are clear in operators" << endl;
    }
    return 0;
}