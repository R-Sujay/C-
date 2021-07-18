#include <iostream>
using namespace std;

int main()
{ 
    int savings;
    cout << "Enter your amount: ";
    cin >> savings;
    if (savings <=50000){
    cout << "Amount transferred";
    }
    else { 
    cout <<"Amount cannot be transferred";
    }
    return 0;
}