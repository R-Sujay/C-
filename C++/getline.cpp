#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string sentence;
  cout<<"Enter a Sentence: ";
  getline(cin,sentence);
  cout<<"\nYour Sentence is: " << sentence;
  return 0;
}
