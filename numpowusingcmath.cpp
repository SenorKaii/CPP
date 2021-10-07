#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, sum = 0;
    char ans;

    do
    {
        cout << "Enter a number to power of 2: ";
        cin >> num;

        num = pow(num,2);
        cout << "\n\nTotal after power of 2: " << num << endl;
        sum = sum + num;
        cout << "\n\nTotal sum of all the number: " << sum << endl;


        cout << "\n\nEnter 'Y' to check another number or 'N' to stop: ";
        cin >> ans;

    }   while (ans == 'Y');

    return 0;
}
