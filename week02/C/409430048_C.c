#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*��*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)/*�e���ť�*/
        {
            printf(" ");
        }
        printf("*");

        if (i == 0)/*�Ĥ@��*/
        {
            printf("\n");
        }
        else if (i == n - 1) /*�̫�@��*/
        {
            for (int j = 0; j < 2 * (n - 1); j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)/*�����ť�*/
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    /*��F*/
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
}