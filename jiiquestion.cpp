#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string staffname;
    int yearinstall;
    double amountloan, interest, total_interest, total_loanint,monthlyinst;

    cout << "Enter Staff Name: ";
    cin >> staffname;

    cout << "Enter How Many Year Of Installment: ";
    cin >> yearinstall;

    cout << "Enter Amount Of Loan: ";
    cin >> amountloan;

    if (yearinstall < 2)
    {
        if (amountloan < 5000)
        {
            interest = 1.5;
        }
        else if(amountloan >= 5000 && amountloan < 10000)
        {
            interest = 2.0;
        }
        else
        {
            cout << "\nInvalid Amount." << endl;
            exit(EXIT_SUCCESS);
        }
    }
    else if(yearinstall >= 2)
    {
        if (amountloan < 5000)
        {
            interest = 2.0;
        }
        else if(amountloan >= 5000 && amountloan < 10000)
        {
            interest = 2.5;
        }
        else
        {
            cout << "\nInvalid Amount." << endl;
            exit(EXIT_SUCCESS);
        }
    }

    total_interest = interest * amountloan;
    total_loanint = amountloan + total_interest;
    monthlyinst = total_loanint / (yearinstall * 12);

    cout << "\n=============================================\n" << endl;
    cout << "Staff Name: " << setw(21) << staffname << endl;
    cout << "Year Of Installment: " << setw(7) << yearinstall << endl;
    cout << "Amount Of Loan: " << setw(15) << amountloan << endl;
    cout << "Total Of Interest: " << setw(15) << total_interest << endl;
    cout << "Total Loan With Interest: " << setw(8) << total_loanint << endl;
    cout << "Monthly Installment: " << setw(13) << monthlyinst << endl;

    return 0;
}
