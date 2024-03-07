#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num;
    int xor = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        xor ^= num;
    }

    if (xor != 0)
    {
        printf("%d\n", xor);
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
