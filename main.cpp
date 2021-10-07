#include <iostream>
using namespace std;

int main()
{
    //DECLARING VARIABLE
    double feet, inches, pounds, heightMeters, mass, bmi;

    //SHOW TEXT THIS APPLICATION IS USED FOR CALCULATE BMI
    cout << "Hello and welcome, this is an application for calculate BMI(Body Mass Index) \n\n";

    //SHOW TEXT FOR ENTERING HEIGHT IN (FEET) VALUE
    cout << "Enter height in (feet): ";

    //USER PUT THE VALUE OF FEET IN HERE
    cin >> feet;

    //SHOW TEXT FOR ENTERING INCHES VALUE
    cout << "\nEnter inches: ";

    //USER PUT THE VALUE OF INCHES IN HERE
    cin >> inches;

    //SHOW TEXT FOR ENTERING WEIGHT(POUNDS) VALUE
    cout << "\nEnter weight in (pounds): ";

    //USER PUT THE VALUE OF POUNDS IN HERE
    cin >> pounds;

    //PROCESS FOR CALCULATE BMI
    heightMeters = ((feet * 12) + inches)*0.0254;
    mass = (pounds / 2.22);
    bmi = mass / (heightMeters * heightMeters);

    //DISPLAYING THE VALUE OF YOUR BMI
    cout << "\n\nBMI results is: " << bmi;

    return 0;
}
