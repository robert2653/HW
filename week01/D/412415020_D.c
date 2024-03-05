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
    long long e;
    scanf("%lld",&Ax);
    scanf("%lld",&Ay);
    scanf("%lld",&Bx);
    scanf("%lld",&By);
    scanf("%lld",&Cx);
    scanf("%lld",&Cy);
    a=Bx-Ax;
    b=By-Ay;
    c=Cx-Ax;
    d=Cy-Ay;
    e=a*d-b*c;
    if(e<0){
        printf("Right");
    }
    else if(e>0){
        printf("Left");
    }
    else if(e==0){
        printf("Touch");
    }



    return 0;
}
