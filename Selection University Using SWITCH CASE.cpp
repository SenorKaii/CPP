#include <iostream>
using namespace std;

int main()
{
    //DECLARE VARIABLES
    char universiti_code;

    //SHOW TEXT OF THIS PROGRAM
    cout << "Welcome User, To University Selection Program\n\n";

    //SHOW UNIIVERSITI NAME DEPENDING ON CODE
    cout << "Code S: Universiti Sains Malaysia" << endl ;
    cout << "Code P: Universiti Putra Malaysia" << endl ;
    cout << "Code K: Universiti Kebangsaan Malaysia" << endl ;
    cout << "Code U: Universiti Utara Malaysia" << endl;

    //SHOW TEXT TO ENTER THE UNIVERSITI CODE
    cout << "\nEnter your universiti code (S, P, K, or U): ";
    cin >> universiti_code ;

    //PROCESS FOR SELECTION UNIVERSITI DEPENDING CODE
    switch (universiti_code)
    {
        case 'S':
            cout << "\nUniversity name: Universiti Sains Malaysia" << endl ;
            break;
        case 'P':
            cout << "\nUniversity name: Universiti Putra Malaysia" << endl ;
            break;
        case 'K':
            cout << "\nUniversity name: Universiti Kebangsaan Malaysia" << endl ;
            break;
        case 'U':
            cout << "\nUniversity name: Universiti Utara Malaysia" << endl ;
            break;
        default:
            cout << "\nInvalid code." << endl ;
            break;
    }

    return 0;
}
