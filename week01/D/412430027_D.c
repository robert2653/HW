#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;



    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1 ,&x2, &y2 ,&x3, &y3);

    // �o�̬O�p��V�q���n
    double cross_product = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    // �o��O�P�_�ĤT���I����l
    if (cross_product > 0) {
        printf("Left ");
    } else if (cross_product < 0) {
        printf("Right ");
    } else {
        printf("Touch");
    }
}
