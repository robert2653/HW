#include <stdio.h>
#include <stdlib.h>
int test(int arr[])
int main()
{
    int a;
    scanf("%d", &a);

    int result = 0;
    int result2 = 0;

    for (int i = 0; i < 2 * a; i++) {
        int num;
        scanf("%d", &num);
        if (i < a) {
            result ^= num;
        } else {
            if (num == result) {
                result2++;
            }
        }
    }

    if (result2 % 2 != 0) {
        printf("%d", result);
    } else {
        printf("0");
    }

    return 0;
}