#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float base, height, areaOfTriangle;
    cout << "Enter the base of the triangle:";
    cin >> base;
    cout << "Enter the height of the triangle:";
    cin >> height;
    areaOfTriangle = 0.5 * (base * height);
    cout << "The area of the right angled triangle is:" << areaOfTriangle << endl;
    return 0;
}