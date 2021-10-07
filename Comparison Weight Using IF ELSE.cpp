#include <iostream>
using namespace std;

int main()
{
    double weight_A, weight_B;
    char fat;

    cout << "COMPARISON BETWEEN WEIGHT A AND B" << endl;

    cout << "\nEnter weight A: ";
    cin >> weight_A;

    cout << "\nEnter weight B: ";
    cin >> weight_B;

    if (weight_A > weight_B)
    {
        fat = 'A';
        cout << "\nfat: " << fat << endl;
    }
    else
    {
        fat = 'B';
        cout << "\nfat: " << fat << endl;
    }

    return 0;
}
