#include <iostream>
using namespace std;

//FUNCTION TO GET USER INPUT FOR MONTH
string getMonth()
{
    //DECLARE VARIABLES
    string month;
    //SHOW TEXT FOR USER TO INPUT THE MONTH
    cout << "Enter The Month: ";
    cin >> month;
    return month;
}

//FUNCTION FOR DISPLAYING THE MONTH THAT USER INPUT
void displayMonth(string month)
{
    cout << "\nMonth: " << month << endl;
}

//FUNCTION TO GET THE AMOUNT OF STUDENT FROM USER INPUT
int getNoOfStudent()
{
    //DECLARE VARIABLES
    int no_student;
    //SHOW TEXT FOR USER TO INPUT THE AMOUNT OF STUDENTS
    cout << "Enter The Amount Of Students: ";
    cin >> no_student;
    return no_student;
}

//FUNCTION FOR USER TO INPUT FOR EVERY EACH STUDENTS SELECTION CODE OF THE COURSE
int * setFee(int student_amount)
{
    //DECLARE VARIABLES
    int * arrfee = new int[student_amount];
    int course_code;

    //LOOP FOR USER TO ENTER THE STUDENT COURSE CODE
    for (int x = 0; x < student_amount; x++)
    {
        //SHOW TEXT FOR USER TO ENTER THE CODE
        cout << "The Selection Course Of Student " << (x+1) << ": ";
        cin >> course_code;

        //PROCESS FOR EVERY EACH COURSE CODE HAVE THEIR OWN FEE
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

//FUNCTION FOR DISPLAYING EVERY STUDENTS FEE
void displayMonthFee(int arrfee[], int student_amount)
{
    //LOOP FOR DISPLAYING EVERY STUDENTS FEE AMOUNT
    for (int i = 0; i < student_amount; i++)
    {
        cout << "The Fee For Student " << i+1 << ": RM " << arrfee[i] << endl;
    }
}

//FUNCTION TO CALCULATE ALL THE TOTAL FEE FROM EVERY STUDENT
int calcTotalFee(int arrfee[], int student_amount)
{
    //DECLARE VARIABLES
    int total_fee = 0;
    //LOOP FOR CALCULATING THE TOTAL FEE AUTOMATICCALY
    for (int a = 0; a < student_amount; a++)
    {
        total_fee = total_fee + arrfee[a];
    }
    return total_fee;
}

//FUNCTION TO GET THE DEDUCTION IF THE TOTAL FEE IS HIGHEST THAN 2500
int feeActivity(int fee)
{
    //PROCESS TO GET THE DEDUCTION IF THE TOTAL FEE FOLLOW AS THE REQUIREMENT
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
    //SHOW TEXT FOR WELCOMING USER TO THE SYSTEM
    cout << "=================================================" << endl;

    cout << "WELCOME TO WANA TRAINING CENTER MANAGEMENT SYSTEM\n";

    cout << "\n=================================================\n" << endl;

    //DECLARE VARIABLES AND FUNCTION CALL
    string month = getMonth();
    int student_amount = getNoOfStudent();
    //PROCESS TO CONTINUE IF THE STUDENT AMOUNT FOLLOW AS THE REQUIREMENT
    if (student_amount < 20)
    {
        cout << "\nAmount Is Less Than Required, Please Try Again";
    }
    else
    {
        cout << "\n=================================================" << endl;

        //FUNCTION CALL
        displayMonth(month);

        cout << "\n=================================================" << endl;

        //SHOW TEXT FOR USER TO ACKNOWLEDGE THEM ABOUT THE SELECTION CODE
        cout << "\nLIST OF THE COURSE AND THE COURSE CODE FOR SELECTION" <<endl;
        cout << "Selection '1': Java Programming" << endl ;
        cout << "Selection '2': MS Office ( Word, Exel, Power Point)" << endl ;
        cout << "Selection '3': Autocad" << endl ;

        cout << "\n=================================================\n" << endl;

        //SHOW TEXT FOR USER TO ENTER THE COURSE CODE
        cout << "Please Enter The Selection Code Of The Course (1,2 or 3)\n" << endl;

        //FUNCTION CALL
        int * arrfee = setFee(student_amount);

        cout << "\n=================================================\n" << endl;

        //FUNCTION CALL
        displayMonthFee(arrfee, student_amount);
        int totalfee = calcTotalFee(arrfee, student_amount);
        int activityfee = feeActivity(totalfee);

        cout << "\n=================================================\n" << endl;

        //SHOW TEXT TO USER THE ORIGINAL TOTAL FEE AND TOTAL FEE AFTER DEDUCTION
        cout << "The Total Fee Is: RM " << totalfee << endl;
        cout << "The Total Fee After Deduction For Staff Activity Is: RM " <<totalfee - activityfee<<" with RM "<<activityfee<<" deduction"<< endl;

        cout << "\n=================================================\n" << endl;
    }
}
