#include <stdio.h>
#include <stdlib.h>

int isPrime(int num);

int main()
{
    int n, i, num[200000];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if (isPrime(num[i])) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 不是质数
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // 不是质数
        }
    }
    return 1;  // 是质数
}

