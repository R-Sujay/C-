#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="welcome";
    char str2[10];
    strncpy(str2,str1,7);
    printf("%s",str2);

    return 0;
}