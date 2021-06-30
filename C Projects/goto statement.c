#include <stdio.h>

int main ()

{

    int a = 10;
        

        label1:do

    {

        if ( a == 12)

        { 

                a++;


                goto label1;

            }

            printf("value of a: %d\n", a);

            a++;

        }
        while( a < 20 );

        return 0;

    }