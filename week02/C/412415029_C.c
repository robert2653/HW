#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n-1;i++)
    {
        for (j=1;j<=2*n-1;j++)
        {
            if (j==(n+i) && j==(n+i))
            {
                printf("*");
                break;
            }
            else if (j==n-i)
            {
                printf("*");
            }
            else if (j==n+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    for (j=1;j<=2*n-1;j++)
    {
        printf("*");
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        for (j=1;j<n;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
