#include <stdio.h>

#include <conio.h>

void main()

{

    int a[2][2],b[2][2],c[2][2],s,u;

    clrscr();

    printf("enter your valencies A:\n");

    for(s=0;s<2;s++)

        for(u=0;u<2;u++)

            scanf("%d",&a[s][u]);

    printf("\nenter your valencies B:\n");

    for(s=0;s<2;s++)

        for(u=0;u<2;u++)

            scanf("%d",&b[s][u]);

    for(s=0;s<2;s++)

        for(u=0;u<2;u++)

            c[s][u]=a[s][u]-b[s][u];

    printf("the values of valencies C are:\n");

    for(s=0;s<2;s++)

{

        for(u=0;u<2;u++)

            printf("%d",c[s][u]);

        printf("\n");

    }

    getch();

}
