#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string repeat(string s, int n)
{	
	string s1 = s;

	for (int i=1; i<n;i++)
		s += s1; 

	return s;
}
int main()
{
	string s;
	int n;
    cout << "Enter Your word (Enter One Word): ";
    cin >> s;
    cout << "Enter Number of Repeatation: ";
    cin >> n;

	cout << repeat(s,  n) << endl;;
            cout << "\n\n\nPress any key to close";
    getch();
	return 0;
}