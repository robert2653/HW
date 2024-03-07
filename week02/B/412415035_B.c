#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int numbers[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &numbers[i]);
        int isPrime = 1;
        if (numbers[i] <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j*j<= numbers[i]; j++)
            {
                if (numbers[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime==1)
            printf("Yes\n");
        else
            printf("No\n");

    }

    return 0;
}
