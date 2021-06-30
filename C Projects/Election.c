#include <stdio.h>
#include <conio.h>

int main()
{
    printf("2021 Chief Minister election for Tamil nadu\n");
    printf("RULES:\n");
    printf("•Pls enter your votes for the following candidates.\n");
    printf("•The candidates are Sujay and Saran.\n");
    printf("•Pls enter your vote (under 100) for your wanted candidate alone.\n");
    printf("•For the unwanted candidate pls enter the number 0.\n");
    int voteSujay;
    printf("Enter your vote for Sujay: ");
    scanf("%d", &voteSujay);
    int voteSaran;
    printf("Enter your vote for Saran: ");
    scanf("%d", &voteSaran);
    if (voteSujay > voteSaran)
        printf("Sujay won the election!");
    else if (voteSujay == voteSaran)
        printf("Tie between Sujay and Saran");
    else
        printf("Saran won the election!");

    printf("\n\n\n Press any key to close this");
    getch();
    return 0;
}