#include <stdio.h>

int main()
{
    int K, i, j;
    scanf("%d", &K);

    // ø�s��
    for (i = 0; i < K; i++)
    {
        // ø�s�C��Ů�
        for (j = 0; j < K - i - 1; j++)
        {
            printf(" ");
        }
        // ø�s�C��P�� or ���
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

    // ø�s��F
    for (i = 0; i < K; i++)
    {
        // ø�s�Ů�H�����
        for (j = 0; j < K - 1; j++)
        {
            printf(" ");
        }
        // ø�s��F
        printf("*\n");
    }

    return 0;
}
