#include <stdio.h>
#include <stdlib.h>

int main(){
    double ax, ay, bx, by, cx, cy, abx, aby, acx, acy, kk, n, m;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);

    
    n = ((ay-by)/(ax-bx));
    m = ((ay-cy)/(ax-cx));
    if(n == m){
        printf("Touch");
        return 0;
    }

    abx = bx-ax;
    aby = by-ay;
    acx = cx-ax;
    acy = cy-ay;
    kk = (abx*acy)-(aby*acx);
    if(kk>0){
        printf("Left");
    }
    else if(kk<0){
        printf("Right");
    }
}