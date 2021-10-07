#include <iostream>

using namespace std;

int main()
{
    double savings;
    const double div = 0.06;
    int year = 1;

    cout << "Enter amount of savings: RM";
    cin >> savings;

    cout << "YEAR\t\tSAVINGS(RM)" << endl;
    cout << "===========================" << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    do
    {
        savings = savings*div + savings;
        cout << year << "\t\t" << savings << endl;
        year++;
    }   while (year <= 10);

    return 0;
}
