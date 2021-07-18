#include <iostream>
using namespace std;

int main()
{ 
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;
    if (marks >=50) {
    cout << "You have passed";
    }
    else { 
    cout <<"You have failed";
    }
    return 0;
}