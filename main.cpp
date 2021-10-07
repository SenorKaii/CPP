#include <iostream>
using namespace std;

int main()
{
    //DECLARING VARIABLES
    int num1, num2, sum, diff, product, avg, maxnum, minnum;

    //SEND TEXT FOR ENTERING FIRST NUMBER
    cout << "Enter first number: ";

    //USER PUT A VALUE FOR FIRST NUMBER
    cin >> num1;

    //SEND TEXT FOR ENTERING SECOND NUMBER
    cout << "\nEnter second number: ";

    //USER PUT A VALUE FOR SECOND NUMBER
    cin >> num2;

    //PROCESS FOR CALCULATE INTEGER NUMBER
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    avg = (num1 + num2) / 2;

    //COMPARING BETWEEN NUMBER AND GET HIGHEST VALUE
    if (num1 > num2)
    {
        maxnum = num1;
    }
    else
    {
        maxnum = num2;
    }

    //COMPARING BETWEEN NUMBER AND GET LOWEST VALUE
    if (num1 < num2)
    {
        minnum = num1;
    }
    else
    {
        minnum = num2;
    }

    //DISPLAY RESULTS OF CALCULATE
    cout << "\nSum of two number: " << sum;
    cout << "\nDifference of two number: " << diff;
    cout << "\nProduct of two number: " << product;
    cout << "\nAverage of two number: " << avg;
    cout << "\nThe largest integer: " << maxnum;
    cout << "\nThe smallest integer: " << minnum;

    return 0;
}
