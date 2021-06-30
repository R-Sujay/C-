#include<stdio.h>

int main()
{
    printf("Pls give your ratings for the following candidates\n");
    printf("AISHWARYA and VIJAY KRISHNA are the candidates\n");
    int aishwarya;
    printf("Enter your value of Aishwarya: ");
    scanf("%d",&aishwarya);
    if(aishwarya<=100)
    printf("Aishwarya has lost her ratings");
    else
printf("Aishwarya has won the rating\n");
    int vijay;
    printf("Enter your value of vijay: ");
    scanf("%d",&vijay);
    if(vijay<=100)
    printf("vijay has lost her ratings");
    else
printf("vijay has won the rating");
    return 0;
}