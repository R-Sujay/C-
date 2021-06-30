#include <stdio.h>
int sum(int s1, int s2)
{
    int s3;
    s3 = s1+s2 ;
    return s3;
}

int main()
{
    int n1,n2,n3;
    printf ("enter the value of n1");
    scanf ("%d",&n1);
    printf ("enter the value of n2");
    scanf ("%d",&n2);
    n3 = sum(n1, n2);
    printf ("output is %d",n3);
    return 0;
}
