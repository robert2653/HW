#include <stdio.h>
#include <stdlib.h>

int main(){

    long long  Ax, Ay, Bx, By, Cx, Cy;

    scanf("%lld %lld %lld %lld %lld %lld",&Ax, &Ay, &Bx, &By, &Cx, &Cy);

    if((Bx-Ax) * (Cy - Ay) == (By-Ay) * (Cx-Ax))
        printf("Yes");
    else
        printf("No");

    return 0;
}
