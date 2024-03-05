#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;



    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1 ,&x2, &y2 ,&x3, &y3);

    // 這裡是計算向量面積
    double cross_product = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    // 這邊是判斷第三個點的位子
    if (cross_product > 0) {
        printf("Left ");
    } else if (cross_product < 0) {
        printf("Right ");
    } else {
        printf("Touch");
    }
}
