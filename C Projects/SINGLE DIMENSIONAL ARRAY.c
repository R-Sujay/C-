#include <stdio.h>
int main()
{
    int a[2], i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nPrinting elements of the array: \n\n");
    for (i = 0; i < 2; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}