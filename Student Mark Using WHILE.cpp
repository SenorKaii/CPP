#include <iostream>
using namespace std;

int main()
{
    int mark, total = 0;
    int student = 1;    //initialization
    double avg;

    while (student <= 10)   //evaluation
    {
        cout << "Enter mark for student " << student << ": ";
        cin >> mark;

        total = total + mark;   //add a list of numbers in a loop
        student+=3;              //updating
    }
        avg = total/10;

        cout << "The total mark is " << total << "." << endl;
        cout << "The average mark is " << avg << ".";

    return 0;
}
