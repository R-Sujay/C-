#include <iostream>
#include <conio.h>
using namespace std;

int main()
{ 
    cout << "Exam analysis\n";
    int Maths;
    cout << "Enter your Maths marks: ";
    cin >> Maths;
    int English;
    cout << "Enter your English marks: ";
    cin >> English;
    int Social;
    cout << "Enter your Social marks: ";
    cin >> Social;
    int Science;
    cout << "Enter your Science marks: ";
    cin >> Science;
    int Tamil;
    cout << "Enter your Tamil marks: ";
    cin >> Tamil;   
    int Computer;
    cout << "Enter your Computer marks: ";
    cin >> Computer;
    int outof;
    cout << "Enter your total out of marks: ";
    cin >> outof;
    int outof2 = outof * 6;
    int Total = Maths + English + Social + Science + Tamil + Computer;
    cout << "The total of your Exam Marks is: " << Total << "/" << outof2;
        cout << "\n\n\nPress any key to close this";
    getch();
    return 0;
}