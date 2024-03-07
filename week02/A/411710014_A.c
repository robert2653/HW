#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // 輸入一個數字

    int arr[n];  // 宣告陣列

    // 輸入 n 個數字
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 使用 XOR 運算找出出現奇數次的數字
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    // 計算出現次數為奇數的數字
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == result) {
            oddCount++;
        }
    }

    // 判斷輸出
    if (oddCount % 2 == 1) {
        printf("%d", result);
    } else {
        printf("0");
    }

    return 0;
}



