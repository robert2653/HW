#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
    long long x1, y1, x2, y2, x3, y3;


    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);

    // 計算兩個向量的外積
    long long dx1 = x2 - x1;
    long long dy1 = y2 - y1;
    long long dx2 = x3 - x1;
    long long dy2 = y3 - y1;
    long long cross = dx1 * dy2 - dx2 * dy1;

    // 根據叉積的正負判斷點相對於直線的位置，並輸出結果
    if (cross == 0) {
        printf("Touch");
    } else if (cross > 0) {
        printf("Left");
    } else {
        printf("Right");
    }

    return 0;
}


