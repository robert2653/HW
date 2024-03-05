#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int ax, ay, bx, by, cx, cy;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
    double  cp = (double)(bx-ax)*(cy-ay)-(double)(by-ay)*(cx-ax);
    if(cp < 0){
        printf("right");
    }else if(cp > 0){
        printf("left");
    }else{
        printf("touch");
    }
    return 0;
}
