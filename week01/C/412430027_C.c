#include <stdio.h>
#include <stdlib.h>
int main() {
    double x1, y1, x2, y2, x3, y3;



    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1 ,&x2, &y2 ,&x3, &y3);



    //這裡適用斜率去計算的
    if ((x2 - x1) / (y2 - y1) == (x3 - x1) / (y3 - y1) || (x3 - x2) / (y3 - y2) == (x3 - x1) / (y3 - y1)){
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}


