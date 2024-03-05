#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf",&ax, &ay, &bx, &by, &cx, &cy);
    if(((by-ay)/(bx-ax))==((by-cy)/(bx-cx))){
        printf("Yes");
    }
    else{
        printf("No");
    };
    return 0;
}
