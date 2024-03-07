#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, num, isPrime;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        isPrime = 1;
        scanf("%d", &num);
        if(num==1)
        {
            printf("No\n");
            continue;
        }
        for(int j = 2; j <= sqrt(num); j++)
        {
            if(num % j == 0)
            {
                isPrime = 0;
                break;
            }

        }
        if(isPrime)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }

    }

    return 0;
}
