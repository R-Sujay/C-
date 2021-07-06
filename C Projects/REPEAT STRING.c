#include<stdio.h>
#include<conio.h>
int main()
{
    char name[30];
    printf("Enter name:" );
    scanf("%s",name);
    printf("%s",name);
    printf("\n\n\nPress any key to close this");
    getch();
    return 0;
}