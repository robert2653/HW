#include <stdio.h>
#include <stdlib.h>


int main() {
    long long int n;
    scanf("%lld", &n);

    long long int xor_res = 0;
    for (int i = 0; i < n; i++) {
        long long int num;
        scanf("%lld", &num);
        xor_res ^= num;//如果有重複的數字xor_res就會換成那個數字然後再換成0
    }

    // 如果結果為0，偶數；結果不為0則為奇數
    if (xor_res != 0) {
        printf("%lld\n", xor_res);
    }
    else {
        printf("0\n");
    }

    return 0;
}


