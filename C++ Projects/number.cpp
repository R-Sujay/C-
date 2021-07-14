#include <iostream>
using namespace std;

int main() {
    int number;
    int add;
    cout << "Enter a Number: ";
    cin >> number;
    cout << "Enter adding number: ";
    cin >> add;
  for (int i = 0; i <= number; i = i + add) {
    cout << i << "\n";
  }
  return 0;
}
