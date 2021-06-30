#include<stdio.h>

int main()
{ 
    int savings;
    printf("Enter your amount: ₹");
    scanf("%d",&savings);
    if(savings <=50000)
    printf("Amount transferred");
    else
    printf("Amount cannot be transfered");
    return 0;
}