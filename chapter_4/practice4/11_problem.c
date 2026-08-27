#include <stdio.h>

int main()
{
    // 2 types of loops in this code

    int n = 7;
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;

        // this is for wihile loop

        /*while(i<n)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
        */

        // this is for do while loop

        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }

    if (not_prime)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }
    return 0;
}