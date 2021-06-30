#include<stdio.h>

int main()
{
    printf("2021 Chief Minister election for Tamil nadu\n");
    printf("RULES:\n");
    printf("pls enter your votes for the following candidates.\n");
    printf("the candidates are Sujay and Saran.\n");
    printf("pls enter your vote (under 100) for your wanted candidate alone.\n");
    printf("for the unwanted candidate pls enter the number 0.\n");
    int Sujay;
    printf("Enter your vote for Sujay: ");
    scanf("%d",&Sujay);
    int Saran;
    printf("Enter your vote for Saran: ");
    scanf("%d",&Saran);
    if(Sujay >Saran)
    printf("Sujay won the election!");
    else if(Sujay == Saran)
    printf("Tie between Sujay and Saran");
    else
    printf("Saran won the election!");
    return 0;
}