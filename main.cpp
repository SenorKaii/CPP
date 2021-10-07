#include <iostream>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    int age ;
    char status_code, education_code ;

    //SHOW TEXT TO WELCOMING USER TO USE THIS PROGRAM
    cout << "WELCOME USER TO OUR MARRIAGE PROGRAM" << endl ;

    //SHOW TEXT ENTER AGE
    cout << "\nEnter age (20 - 30): ";
    cin >> age ;

    //SHOW TEXT CATEGORY OF THE STATUS
    cout << "\n\nCATEGORY FOR SELECTION STATUS\n" << endl ;
    cout << "Teruna = (T) OR (t)" << endl ;
    cout << "Dara = (D) OR (d)" << endl ;

    //SHOW TEXT ENTER STATUS CODE
    cout << "\nEnter status code: ";
    cin >> status_code;

    //SHOW TEXT CATEGORY OF THE EDUCATION
    cout << "\n\nCATEGORY OF THE SELECTION EDUCATION\n" << endl ;
    cout << "University: (U) OR (u)" << endl ;
    cout << "High School: (H) OR (h)" << endl ;

    //SHOW TEXT ENTER EDUCATION
    cout << "\nEnter education: ";
    cin >> education_code ;

    //Process
    if (age >= 20 && age <= 30)
    {
        if (status_code == 'T' || status_code == 't')
        {
            if (education_code == 'U' || education_code == 'u')
                cout << "\nDowry: RM10 000" << endl ;
            else if (education_code == 'H' || education_code == 'h')
                cout << "\nDowry: RM5 000" << endl ;
            else
                cout << "\nInvalid Education Code!" << endl ;
        }
        else if (status_code == 'D' || status_code == 'd')
        {
            if (education_code == 'U' || education_code == 'u')
                cout << "\nDowry: RM10 000" << endl ;
            else if (education_code == 'H' || education_code == 'h')
                cout << "\nDowry: RM5 000" << endl ;
            else
                cout << "\nInvalid Education Code!" << endl ;
        }
        else
        {
            cout << "\nInvalid Status Code!" << endl ;
        }

    }
    else
    {
        cout << "\nInvalid Age Not Available" << endl ;
    }

    return 0;
}
