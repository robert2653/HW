#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //設定座標
    double ax, ay, bx, by, cx, cy;
    double A, B, C;
    
    //數學式判斷斜率
    scanf("%lf %lf %lf %lf %lf %lf",&ax, &ay, &bx, &by, &cx, &cy);
    A = (ay - by) / (ax - bx);
    B = (by - cy) / (bx - cx);
    C = (ay - cy) / (ax - cx);

    //三斜率相同即為共線
    if(A == B && B == C && A == C)
    {
        printf("Yes");
    }
    
    else
    {
        printf("No");
    }
    

    return 0;
}