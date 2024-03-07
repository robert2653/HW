#include <stdio.h>
#include <stdlib.h>

// 檢查一個數字是否為質數
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // 不是質數
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // 不是質數
        }
    }
    return 1;  // 是質數
}

int main() {
    int t;
    scanf("%d", &t);

    int results[t]; // 用來存放結果的陣列

    // 輸入數字並檢查是否為質數
    for (int j = 0; j < t; j++) {
        int x;
        scanf("%d", &x);
        results[j] = isPrime(x);
    }

    // 輸出結果
    for (int k = 0; k < t; k++) {
        printf("%s\n", results[k] ? "Yes" : "No");
    }

    return 0;
}
