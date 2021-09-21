#include<iostream>
#include<string>

using namespace std;
int main(){
    string fullName;
    cout << "type your full name: ";
    getline(cin, fullName);
    cout << "Your Name is: " << fullName;
}