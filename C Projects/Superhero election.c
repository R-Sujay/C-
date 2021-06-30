#include<stdio.h>

int main()
{
    printf("2021 Chief Minister election for Tamil nadu\n");
    printf("RULES:\n");
    printf("•Pls enter your votes for the following candidates.\n");
    printf("•The candidates are Aquaman and Superman.\n");
    printf("•Pls enter your vote (under 100) for your wanted candidate alone.\n");
    printf("•For the unwanted candidate pls enter the number 0.\n");
    int Aquaman;
    printf("Enter your vote for Aquaman: ");
    scanf("%d",&Aquaman);
    int Superman;
    printf("Enter your vote for Superman: ");
    scanf("%d",&Superman);
    if(Aquaman >Superman)
    printf("Aquaman won the election!");
    else if(Aquaman = Superman)
    printf("Tie between Aquaman and Superman");
    else
    printf("Superman won the election!");
    return 0;
}