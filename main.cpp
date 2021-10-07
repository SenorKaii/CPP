#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double radius, height, volume;
    const double pi = 3.14;
    int i = 0;

    for (i = 0; i < 3 ; i++)
    {
        cout << "\nEnter radius(r) value: ";
        cin >> radius;

        cout << "\nEnter height value: ";
        cin >> height;

        volume = pi * pow(radius,2) * height;
        cout << "\nTotal volume: " << volume << endl ;
    }

    return 0;
}
