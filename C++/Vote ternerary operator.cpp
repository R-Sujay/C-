#include <iostream>
using namespace std;

int main()
{ 
    int vote; 
    int vote1;
    int vote2;
    cout << "Enter Your Vote For Candidate One: ";
    cin >> vote1;
    cout << "Enter Your Vote for Candidate Two: ";
    cin >> vote2;
    vote1 > vote2 ? cout << "Candidate One Won!" : cout << "Candidate Two Won!";
    return 0;
}