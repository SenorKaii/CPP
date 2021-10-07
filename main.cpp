#include <iostream>
using namespace std;

int main()
{
    //DECLARING VARIABLE
    double fahrenheit, celsius;

    //SHOW TEXT THIS IS PROGRAM IS USED TO CALCULATE FAHRENHEIT TO CELSIUS
    cout << "Hello, this is program to calculate fahrenheit to celsius \n\n";

    //SHOW TEXT FOR ENTERING FAHRENHEIT VALUE
    cout << "Enter Fahrenheit: ";

    //USER PUT THE VALUE OF FAHRENHEIT
    cin >> fahrenheit;

    //PROCESS FOR CALCULATE FAHRENHEIT TO CELSIUS
    celsius = (5 * (fahrenheit - 32)) / 9;

    //DISPLAYING THE VALUE OF FAHRENHEIT IN CELSIUS
    cout << "Celsius is: " <<celsius;

    return 0;
}
