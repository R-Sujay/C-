#include <stdio.h>

#include <conio.h>

void main()

{

    int a[2][3],b[2][3],c[2][3],s,u;

    clrscr();

    printf("Enter your valencies A:\n");

    for(s=0; s<2; s++)

        for(u=0; u<3; u++)

            scanf("%d",&a[s][u]);

    printf("Enter your valencies B:\n");

    for(s=0; s<2; s++)

        for(u=0; u<3; u++)

            scanf("%d",&b[s][u]);

    for(s=0; s<2; s++)

        for(u=0; u<2.; u++)

            c[s][u]=a[s][u]+b[s][u];

    printf("The values of valencies C are:\n");

    for(s=0; s<2; s++)

    {

        for(u=0; u<3; u++)

            printf("%d",c[s][u]);

        printf("\n");

    }

    getch();

}