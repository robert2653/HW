#include <stdio.h>
#include <stdlib.h>

int main(){

    long long  Ax, Ay, Bx, By, Cx, Cy;

    scanf("%lld %lld %lld %lld %lld %lld",&Ax, &Ay, &Bx, &By, &Cx, &Cy);

    long long cross = (Cx-Ax) * (By-Ay) - (Cy-Ay) * (Bx-Ax);

    if(cross > 0){
        printf("Right");
    }
    else if(cross < 0){
        printf("Left");
    }
    else
        printf("Touch");

    return 0;
}
