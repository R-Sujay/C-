#include<stdio.h>

int main()
{
    printf("Analysis of awesomeness in AQUAMAN or SUPERMAN\n");
    printf("Pls enter your rates for the heros in form of points(pls enter points under the rating of 100).\n");
    int AQUAMAN;
    printf("Enter your Points for AQUAMAN: ");
    scanf("%d",&AQUAMAN);
    if(AQUAMAN <=50)
        printf("AQUAMAN will try to be better.\n");
    else
        printf("AQUAMAN will be happy for this rating.\n");
    int SUPERMAN;
    printf("Enter your Points for SUPERMAN: ");
    scanf("%d",&SUPERMAN);
    if(SUPERMAN <=50)
        printf("SUPERMAN will try to be better.\n");
    else
        printf("SUPERMAN will be happy for this rating.\n");
    return 0;
}