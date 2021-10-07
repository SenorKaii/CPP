#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    //DECLARING VARIABLES
    string date;
    double entrytime, exittime, hours, totalpayment;
    char carnumber[100];

    //GET CURRENT DATE
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    date = to_string((tPtr->tm_mday)) + "/" + to_string((tPtr->tm_mon + 1)) + "/" + to_string((tPtr->tm_year)+1900);

    //GET INPUT WITH SPACING
    cout << "\nABC PRIVATE PARKING\n\n";
    cout << "Enter Your Car Number: ";
    cin.getline(carnumber,sizeof(carnumber));

    //SET 2 DECIMAL POINT BEHIND
    cout.setf (ios::fixed);
    cout.precision(2);

    //SHOW TEXT FOR USER TO ENTER VALUE OF TIME(ENTER)
    cout << "Time You Enter This Parking (12 hours system): ";
    cin >> entrytime;

    //SHOW TEXT FOR USER TO ENTER VALUE OF TIME(EXIT)
    cout << "Time You Exit This Parking (12 hours system): ";
    cin >> exittime;
    cout << "\n\n\n";

    //PROCESS TO CALCULATE TOTAL PAYMENT DEPENDIND ON THE HOUR
    hours = exittime - entrytime;
    if (hours > 1)
    {
        totalpayment = 2 + (hours - 1);
    }
    else
    {
        hours = (12 - entrytime) + exittime;
        totalpayment = 2 + (hours - 1);
    }

    //DISPLAY RESULTS
    cout << setw(35) << "ABC PRIVATE PARKING" << endl;
    cout << "CAR NUMBER: " << carnumber << endl;
    cout << "DATE: " << date << endl;
    cout << "TIME (ENTER): " << entrytime;
    cout << setw(30) << "TIME (EXIT): " << exittime << endl;
    cout << "TOTAL PAYMENT: RM" << totalpayment << endl;
    cout << setw(45) << "THANK YOU FOR USING OUR SERVICE\n\n\n";

    return 0;
}
