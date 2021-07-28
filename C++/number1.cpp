#include <iostream>
using namespace std;

int main(){
int number;
cout << "Enter Your Number: ";
cin >> number;
  for (int i = 0; i < number; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
  }