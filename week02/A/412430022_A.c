#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = 0;

    for (int i = 0; i < num; i++)
    {
        int k;
        scanf("%d", &k);
        result ^= k;
    }

    if (result == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}