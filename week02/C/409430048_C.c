#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*樹葉*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)/*前面空白*/
        {
            printf(" ");
        }
        printf("*");

        if (i == 0)/*第一排*/
        {
            printf("\n");
        }
        else if (i == n - 1) /*最後一排*/
        {
            for (int j = 0; j < 2 * (n - 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)/*中間空白*/
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    /*樹幹*/
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
}