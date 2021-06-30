#include <stdio.h>
void swap(int *a, int *b)
{
    int t1;
    t1=*a;
    *a = *b;
    *b = t1;
}
int main()
{
    int n1=30,n2=40;
    printf("before swapping");
    printf("\nn1 value is %d",n1);
    printf("\nn2 value is %d",n2);
    swap(&n1,&n2);
    printf("\nafter swapping");
    printf("\nn1 value is %d",n1);
    printf("\nn2 value is %d",n2);
    return 0;
}