#include<iostream>
using namespace std;

class students {
    public:
    int roll;
    int mark;

    void exam();
};

void students::exam()
{
    cout << "All The Best for the Exam!!!!";
}

int main(){
    students s1;

    s1.exam();
}