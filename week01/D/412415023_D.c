#include <stdio.h>
#include <stdlib.h>

int main() {
    long ax, ay, bx, by, cx, cy;
    scanf("%ld%ld%ld%ld%ld%ld", &ax, &ay, &bx, &by, &cx, &cy);

    double vx = (double)(bx - ax);
    double vy = (double)(by - ay);//ab�V�q

    double ux = (double)(cx - ax);
    double uy = (double)(cy - ay);//ac�V�q

    double position = (double)(vx*uy-vy*ux);//�~�n��C��

    if(position > 0){
        printf("left\n");
    }
    else if(position < 0){
        printf("right\n");
    }
    else if(position == 0){
        printf("touch\n");
    }
    return 0;
}
