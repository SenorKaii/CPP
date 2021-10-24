#include <iostream>
using namespace std;

string getMonth()
{
    string month;
    cout << "Enter The Month: ";
    cin >> month;
    return month;
}

void displayMonth(string month)
{
    cout << "\nMonth: " << month << endl;
}

int getNoOfStudent()
{
    int no_student;
    cout << "Enter The Amount Of Students: ";
    cin >> no_student;
    return no_student;
}

int * setFee(int student_amount)
{
    int * arrfee = new int[student_amount];
    int course_code;

    for (int x = 0; x < student_amount; x++)
    {
        cout << "The Selection Course Of Student " << (x+1) << ": ";
        cin >> course_code;

        switch (course_code)
        {
            case 1 :
                arrfee[x] = 200;
                break;
            case 2 :
                arrfee[x] = 150;
                break;
            case 3 :
                arrfee[x] = 100;
                break;
            default:
                cout << "\n=================================================\n" << endl;

                cout << "Invalid selection." << endl ;
                cout << "The code user enter doesn't exist in the system." << endl ;
                cout << "Please try again with the valid code." << endl ;

                cout << "\n=================================================\n" << endl;

                x = x-1;
                break;
        }

    }
    return arrfee;
}

void displayMonthFee(int arrfee[], int student_amount)
{
    for (int i = 0; i < student_amount; i++)
    {
        cout << "The Fee For Student " << i+1 << ": RM " << arrfee[i] << endl;
    }
}

int calcTotalFee(int arrfee[], int student_amount)
{
    int total_fee = 0;
    for (int a = 0; a < student_amount; a++)
    {
        total_fee = total_fee + arrfee[a];
    }
    return total_fee;
}

int feeActivity(int fee)
{
    if (fee > 2500)
    {
        fee = fee * 0.1;
    }
    else
    {
        fee = 0;
    }
    return fee;
}

int main()
{
    cout << "=================================================" << endl;

    cout << "WELCOME TO WANA TRAINING CENTER MANAGEMENT SYSTEM\n";

    cout << "\n=================================================\n" << endl;

    string month = getMonth();
    int student_amount = getNoOfStudent();
    if (student_amount < 20)
    {
        cout << "\nAmount Is Less Than Required, Please Try Again";
    }
    else
    {
        cout << "\n=================================================" << endl;

        displayMonth(month);

        cout << "\n=================================================" << endl;

        cout << "\nLIST OF THE COURSE AND THE COURSE CODE FOR SELECTION" <<endl;
        cout << "Selection '1': Java Programming" << endl ;
        cout << "Selection '2': MS Office ( Word, Exel, Power Point)" << endl ;
        cout << "Selection '3': Autocad" << endl ;

        cout << "\n=================================================\n" << endl;

        cout << "Please Enter The Selection Code Of The Course (1,2 or 3)\n" << endl;

        int * arrfee = setFee(student_amount);

        cout << "\n=================================================\n" << endl;

        displayMonthFee(arrfee, student_amount);
        int totalfee = calcTotalFee(arrfee, student_amount);
        int activityfee = feeActivity(totalfee);

        cout << "\n=================================================\n" << endl;

        cout << "The Total Fee Is: RM " << totalfee << endl;
        cout << "The Total Fee After Deduction For Staff Activity Is: RM " <<totalfee - activityfee<<" with RM "<<activityfee<<" deduction"<< endl;

        cout << "\n=================================================\n" << endl;
    }
}
