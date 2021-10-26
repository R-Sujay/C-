#include <iostream>
using namespace std;

class books {
    public:
    string bookCode = "/ef32", bookName = "Sunset of the sabertooth", bookAuthor = "Mary Pope Osborne, Sal Murdocca (Illustrator)";
    int bookNoOfPages = 80;
};
int main()
{
    books book1;

    cout << "\n \n \nThe Book Details are: \n Book Code: " << book1.bookCode << "\n Book Name: " << book1.bookName<< "\n Book Author: " << book1.bookAuthor << "\n Book No Of Pages: " << book1.bookNoOfPages << "\n \n";

    return 0;
}