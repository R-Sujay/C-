#include <iostream>
using namespace std;

int main()
{
  int Coupon;
  int price;
  int price2;
  int Quantity;
  int Quantity1;
  int Quantity2;
  int Quantity3;
  int Quantity4;
  int Quantity5;
  int Coupon1;
  int Coupon2;
  int Coupon3;

  price = 26490;
  price2 = Quantity;
  Coupon1 = 200;
  Coupon2 = 100;
  Coupon3 = 300;
  Quantity1 = price*1;
  Quantity2 = price*2;
  Quantity3 = price*3;
  Quantity4 = price*4;
  Quantity5 = price *5;
  
    cout << "Product: 1000W 5.1Ch Blu-ray Home Entertainment System J5100\n";
    cout << "Price: $26490\n";
    cout << "Enter Quantity: ";
    cin >> Quantity;
    switch (Quantity)
    {
    case 1:
        cout << "Price: $" << Quantity1;
        break;   
        case 2:
        cout << "Price: $" << Quantity2;
        break;    
        case 3:
        cout << "Price: $" << Quantity3;
        break;    
        case 4:
        cout << "Price: $" << Quantity4;
        break;    
        case 5:
        cout << "Price: $" << Quantity5;
        break;    
    default:
    cout << "Sorry We Don't have that much Quanties in Stock";
        break;
    }

    // 1. Enter "59628" Coupon to get $200 off
    // 2. Enter "91728" Coupon to get $100 off
    // 3. Enter "85637" Coupon to get $300 off

    return 0;
}