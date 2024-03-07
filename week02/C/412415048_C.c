#include <stdio.h>

int main()
{
    int K, i, j;
    scanf("%d", &K);

    // 繪製樹葉
    for (i = 0; i < K; i++)
    {
        // 繪製每行空格
        for (j = 0; j < K - i - 1; j++)
        {
            printf(" ");
        }
        // 繪製每行星號 or 邊框
        for (j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i || i == K - 1)
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

    // 繪製樹幹
    for (i = 0; i < K; i++)
    {
        // 繪製空格以對齊樹葉
        for (j = 0; j < K - 1; j++)
        {
            printf(" ");
        }
        // 繪製樹幹
        printf("*\n");
    }

    return 0;
}
