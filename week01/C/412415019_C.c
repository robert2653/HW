#include <stdio.h>
#include <stdlib.h>

int main()
{
    long ax, ay, bx, by, cx, cy;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
    double a = (double)(ax-bx)/(ay-by);
    double b = (double)(bx-cx)/(by-cy);
    double c = (double)(cx-ax)/(cy-ay);
    if(a == b && b == c){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}
