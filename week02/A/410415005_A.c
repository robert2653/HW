#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int result = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        result ^= num; // 使用 XOR 运算
    }

    // 检查是否有出现奇数次的数字
    if (result != 0)
        printf("%d\n", result);
    else
        printf("0\n");

    return 0;
}
