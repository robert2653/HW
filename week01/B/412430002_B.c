#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long long int a,b,y;
    int x = 2;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);

    for(int i=1;i<=30;i++){
    x = x*2 ;
    }
    y = -x;
    if (a <= (x-1)&& a >= y && b <= (x-1) && b >= y) {
    if (c=='+') {
    printf("%lld", a+b);
    }
    else if (c=='-') {
    printf("%lld", a-b);
    }
    else if (c=='*') {
    printf("%lld", a*b);
    }
    else {
    printf("wrong operator");
    }
    }
    else {
    printf("wrong answer");
    }

    return 0;
    }
