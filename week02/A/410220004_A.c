#include <stdio.h>
#define SIZE 200000

int main(void)
{
    int n = 0,
        res = 0;
    long long num[SIZE] = {0};
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%lld", &num[i]);
        res ^= num[i];
    }
    printf("%d", res);
}

