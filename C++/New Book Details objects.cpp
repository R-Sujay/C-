#include<iostream>
#include<string>
using namespace std;
class book
{
    public:
    string name,authorname;
    int price;
    int pages;
    
};

void ma()
{
   book b1;
   cout<<"Enter the name of a book which you like the most : ";
   getline(cin,b1.name);
   cout<<"Enter the name of the Author of that book : ";
   getline(cin,b1.authorname);
   cout<<"Enter the price of that book : ";
   cin>>b1.price;
   cout<<"Enter the pages of that book : ";
   cin>>b1.pages;
   cout<<"Book details : \n";
   cout<<"Book name : "<<b1.name<<"\n"<<"Price : "<<b1.price<<"\n"<<"Author name : "<<b1.authorname<<"\n"<<"Pages : "<<b1.pages;
    
}
int main()
{
    
   ma();
   
}


