#include <stdio.h>
int increment(int *var)
{
    int var1;
    *var = *var +1;
    return var1;
}
int main()
{
    int num =10;
    increment(&num);
    printf("value of num is %d",num);
    return 0;
}
