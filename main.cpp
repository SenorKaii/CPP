#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    int type;
    char ans;
    double width, length, height, radius, volume;
    const double pi = 3.142;

    //SHOW TEXT OF THIS PROGRAM
    cout << "Welcome User, To Shapes Calculate Volume Formula Program\n\n";

    //SHOW ALL THE TYPE OF SHAPES ARE AVAILABLE IN THIS PROGRAM
    cout << "This Is Type Of Shapes You Can Select To Calculate" << endl;
    cout << "Type 1: Cuboid" << endl ;
    cout << "Type 2: Cone" << endl ;
    cout << "Type 3: Pyramid" << endl ;

    do
    {
        cout << "\nEnter type of shapes you like (1,2 or 3): ";
        cin >> type ;

        switch (type)
        {
            case 1:
                cout << "\nYou Selected A Cuboid" << endl;
                cout << "Please enter width: ";
                cin >> width;
                cout << "Please enter length: ";
                cin >> length;
                cout << "Please enter height: ";
                cin >> height;
                volume = width * length * height;
                cout << "\nThe volume of the cuboid: " << volume << endl;
                break;
            case 2:
                cout << "\nYou Selected A Cone" << endl;
                cout << "Please enter radius: ";
                cin >> radius;
                cout << "Please enter height: ";
                cin >> height;
                volume = 0.333333333 * pi * pow(radius,2) * height;
                cout << "\nThe volume of the cone: " << volume << endl;
                break;
            case 3:
                cout << "\nYou Selected A Pyramid" << endl ;
                cout << "Please enter length: ";
                cin >> length;
                cout << "Please enter width: ";
                cin >> width;
                cout << "Please enter height: ";
                cin >> height;
                volume = 0.333333333 * length * width * height;
                cout << "\nThe volume of the pyramid: " << volume << endl;
                break;
            default:
                cout << "\nInvalid type." << endl ;
                break;
        }
        cout << "\nEnter 'Y' to check another number or 'N' to stop: ";
        cin >> ans;
    }   while (ans == 'Y');


    return 0;
}
