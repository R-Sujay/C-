#include<stdio.h>

int main()
{
    printf("PA 3 analysis\n");
    int Maths;
    printf("Enter your Maths marks: ");
    scanf("%d",&Maths);
    int English;
    printf("Enter your English marks: ");
    scanf("%d",&English);
    int Social;
    printf("Enter your Social marks: ");
    scanf("%d",&Social);
    int Science;
    printf("Enter your Science marks: ");
    scanf("%d",&Science);
    int Tamil;
    printf("Enter your Tamil marks: ");
    scanf("%d",&Tamil);   
    int Computer;
    printf("Enter your Computer marks: ");
    scanf("%d",&Computer);
    int outof;
    printf("Enter your total out of marks: ");
    scanf("%d",&outof);
    int Total=Maths+English+Social+Science+Tamil+Computer;
    printf("The total of your PA 3 Marks is: %d\n/",Total);
    printf("%d",outof);
    return 0;
}