#include <iostream>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    double amount, crate, total;

    //SHOW TEXT FOR USER TO ENTER THE AMOUNT
    cout << "Enter The Amount Of Sales :RM " ;
    cin >> amount;

    //PROCESS
    if (amount <= 2000 )
    {
        crate = 0.02 ;
        total = amount * crate;
    }
    else if (amount > 2000 && amount <= 5000)
    {
        crate = 0.05;
        total = amount * crate;
    }
    else
    {
        crate = 0.1;
        total = amount * crate;
    }

    //OUTPUT
    cout << "Sales Amount (RM) :RM " << amount << endl;
    cout << "Commission Rate : " << crate << endl;
    cout << "Total Commission (RM) :RM " << total << endl;

    return 0;
}
