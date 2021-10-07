#include <iostream>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    double kg, metric, pound, oz, grams;
    int choices, i;

    //SHOW TEXT OF THIS PROGRAM
    cout << "WELCOME USER, TO KILOGRAM CALCULATION SELECTION FORMULA\n";

    cout << "\n=============================================" << endl;

    //SHOW CHOICES OF FORMULA FOR KG VALUE
    cout << "\nCHOICES OF FORMULA TO CONVERT THE VALUE OF KG" <<endl ;
    cout << "Choice 1: Convert to Metric Tons" << endl ;
    cout << "Choice 2: Convert to Pounds" << endl ;
    cout << "Choice 3: Convert to Oz" << endl ;
    cout << "Choice 4: Convert to Grams" << endl;

    cout << "\n=============================================" << endl;

    //SHOW TEXT OF FORMULA
    cout << "\nFORMULA" << endl ;
    cout << "Metric Tons = kg/1000" << endl ;
    cout << "Pounds = kg x 2.2" << endl ;
    cout << "Oz = kg x 35.273962" << endl ;
    cout << "Grams = kg x 1000" << endl;

    cout << "\n=============================================" << endl;

    //SHOW TEXT TO ENTER VALUE OF KG
    for (i = 0; i < 10 ; i++)
    {
        cout << "\nEnter your choice number of formuula (1,2,3 or 4): ";
        cin >> choices ;

        cout << "\nEnter the value of kg: ";
        cin >> kg ;

        switch (choices)
        {
            case 1 :
                metric = kg/1000 ;
                cout << "\nTotal: " << metric << " Metric Tons" << endl ;
                break;
            case 2 :
                pound = kg * 2.2 ;
                cout << "\nTotal: " << pound << " Pounds" << endl ;
                break;
            case 3 :
                oz = kg * 35.273962 ;
                cout << "\nTotal: " << oz << " Oz" << endl ;
                break;
            case 4 :
                grams = kg * 1000 ;
                cout << "\nTotal: " << grams << " Grams" << endl ;
                break;
            default:
                cout << "\nInvalid choice." << endl ;
                break;
        }
            cout << "\n=============================================" << endl;
    }
    return 0;
}
