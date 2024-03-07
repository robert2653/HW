#include <stdio.h>

int main() {
    int num, input, result = 0;

    scanf("%d", &num); // 輸入一個數字

    // 使用 XOR 運算統計每個數字出現的次數並找出結果
    for (int i = 0; i < num; i++) {
        scanf("%d", &input);
        result ^= input;
    }

    // 輸出結果
    printf("%d\n", result);

    return 0;
}
