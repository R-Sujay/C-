#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char str1[25], str2[25];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Concatenated string = %s", str1);
    printf("\n\n\nPress any key to close this");
    getch();
    return 0;
}