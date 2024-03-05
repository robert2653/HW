#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Ax;
    long long Ay;
    long long Bx;
    long long By;
    long long Cx;
    long long Cy;
    long long a;
    long long b;
    long long c;
    long long d;
    scanf("%lld",&Ax);
    scanf("%lld",&Ay);
    scanf("%lld",&Bx);
    scanf("%lld",&By);
    scanf("%lld",&Cx);
    scanf("%lld",&Cy);
    a=Bx-Ax;
    b=Cx-Ax;
    c=By-Ay;
    d=Cy-Ay;
    if(b*c==a*d){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
