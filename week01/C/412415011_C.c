#include <stdio.h>
#include <stdlib.h>

int main(){
    double ax, ay, bx, by, cx, cy, n, m;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);

    if ((ax-bx)==0 || (ax-cx)==0){
        printf("No");
        return 0;
    }
    n = ((ay-by)/(ax-bx));
    m = ((ay-cy)/(ax-cx));
    if(n == m){
        printf("Yes");
    }
    else{
        printf("No");
    }
}