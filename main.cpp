 #include <iostream>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    int mark;
    int getgrade(int);

    //SHOW TEXT WELCOME USER TO THE PROGRAM
    cout << "Hello And Welcome To Mark And Grade Program!\n";

    //SHOW TEXT TO ENTER THE CHOICES FOR CALCULATING TO USER
    cout << "\nEnter mark: ";
    cin >> mark;
    getgrade(mark);

    //PROCESS
    if (mark > 80)
        grade = 'A';
    else if (mark >= 70 && mark <= 79)
        grade = 'B';
    else if (mark >= 50 && mark <= 69)
        grade = 'C';
    else
        grade = 'F';

    cout << "Your grade: " << grade ;

}

void getgrade(int mark)
{
    //DECLARE VARIABLES
    char grade;
}