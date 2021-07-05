#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int Coupon;
  int price;
  int Coupon1;
  int Coupon2;
  int Coupon3;

  price = 26490;
  Coupon1 = 200;
  Coupon2 = 100;
  Coupon3 = 300;

    cout << "Product: 1000W 5.1Ch Blu-ray Home Entertainment System J5100\n";
    cout << "Price: $26,490";
    cout << "\n\nHaving a Coupon? Enter it here: ";
  cin >> Coupon;

  switch (Coupon) {
  case 59628:
    cout << "Coupon Applied\n\n";
        cout << "Your Remaining balance is " << "$"<< price - Coupon1;
    break;  
    case 91728:
    cout << "Coupon Applied\n\n";
        cout << "Your Remaining balance is " << "$"<< price - Coupon2;
    break; 
    case 85637:
    cout << "Coupon Applied\n\n";
        cout << "Your Remaining balance is " << "$"<< price - Coupon3;
    break;
      default: 
      cout << "Invalid Coupon";
  break;
  }

    // 1. Enter "59628" Coupon to get $200 off
    // 2. Enter "91728" Coupon to get $100 off
    // 3. Enter "85637" Coupon to get $300 off

    cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}