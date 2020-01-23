/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for (int i=1; i<=100; i++)
    {
        if (i % 15 == 0)    
            {
                printf("FizzBuzz\n");
            }
        else if (i % 3 == 0)
            {
                printf("Fizz\n");
            }
        else if (i % 5 == 0)
            {
                printf("Buzz\n");
            }
        if ((i % 3 != 0) && (i % 5 != 0))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

