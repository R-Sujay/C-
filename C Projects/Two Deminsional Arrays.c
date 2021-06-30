#include <stdio.h>
int main()
{
int b[2][3]; 
int i, j; 
for(i=0; i<2; i++) 
{ for(j=0;j<3;j++) 
{ 
printf("Enter value for b[%d][%d]:", i, j); 
scanf("%d", &b[i][j]); 
} 
} 
printf("Two Dimensional array elements:\n"); 
for(i=0; i<2; i++) 
{ 
for(j=0;j<3;j++) 
{ 
printf("%d ", b[i][j]); 
if(j==2)
{ 
printf("\n"); 
} 
} 
} 
return 0; 
}