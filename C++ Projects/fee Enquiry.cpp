#include <iostream>
using namespace std;

int main()
{
    int grade;
    int tutition1;
    int book1;    
    int tutition2;
    int book2;
    int tutition3;
    int book3;
    int tutition4;
    int book4;
    int tutition5;
    int book5;
    int tutition6;
    int book6;
    int tutition7;
    int book7;
        int tutition8;
    int book8;
            int tutition9;
    int book9;
                int tutition10;
    int book10;

    tutition1=10000;
    book1=5000;
    tutition2= 10500;
    book2= 5800;    
    tutition3= 11000;
    book3= 6000;    
    tutition4= 11500;
    book4= 6800;
    tutition5= 12000;
    book5= 7000;
        tutition6= 12500;
    book6= 7800;
            tutition7= 13000;
    book7= 8000;
                tutition8= 13500;
    book8= 9000;
                    tutition9= 14000;
    book9= 9800;
                        tutition10= 14500;
    book10= 10000;

    cout << "School Fees Enquiry System";
    cout << "\n==========================\n";
    cout << "Enter the grade to know the fee structure: ";
    cin >> grade;
    switch (grade)
    {
    case 1:
        cout << "\nFees for 1st Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition1;
    cout << "\n    Book Fees: Rs." << book1;
    cout << "\n   Total Fees: Rs." << tutition1+book1;
        break;   
        case 2:
        cout << "\nFees for 2nd Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition2;
    cout << "\n    Book Fees: Rs." << book2;
    cout << "\n   Total Fees: Rs." << tutition2+book2;
        break;        
        case 3:
        cout << "\nFees for 3rd Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition3;
    cout << "\n    Book Fees: Rs." << book3;
    cout << "\n   Total Fees: Rs." << tutition3+book3;

        break;        
        case 4:
        cout << "\nFees for 4th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition4;
    cout << "\n    Book Fees: Rs." << book4;
    cout << "\n   Total Fees: Rs." << tutition4+book4;

        break;        
        case 5:
        cout << "\nFees for 5th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition5;
    cout << "\n    Book Fees: Rs." << book5;
    cout << "\n   Total Fees: Rs." << tutition5+book5;

        break;
                case 6:
        cout << "\nFees for 6th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition6;
    cout << "\n    Book Fees: Rs." << book6;
    cout << "\n   Total Fees: Rs." << tutition6+book6;

        break;                
        case 7:
        cout << "\nFees for 7th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition7;
    cout << "\n    Book Fees: Rs." << book7;
    cout << "\n   Total Fees: Rs." << tutition7+book7;

        break;        
        case 8:
        cout << "\nFees for 8th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition8;
    cout << "\n    Book Fees: Rs." << book8;
    cout << "\n   Total Fees: Rs." << tutition8+book8;

        break;        
        case 9:
        cout << "\nFees for 9th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition9;
    cout << "\n    Book Fees: Rs." << book9;
    cout << "\n   Total Fees: Rs." << tutition9+book9;

        break;
                case 10:
        cout << "\nFees for 10th Grade";
    cout << "\n==================\n";
    cout << "Tutition Fees: Rs." << tutition10;
    cout << "\n    Book Fees: Rs." << book10;
    cout << "\n   Total Fees: Rs." << tutition10+book10;

        break;
    
    default:
    cout << "Invaild Choice! Please Choose a vaild choice";
        break;
    }
        cout << "\n\nThanks for making your payment!";
    return 0;
}