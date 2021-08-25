#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int value, cube; 
    cout << "\n\nEnter a Value to Find It's Cube Number: ";
    cin >> value;
    cube = pow (value, 3);
    cout << "The Cube Value for the Number is: " <<cube;

    return 0;
}