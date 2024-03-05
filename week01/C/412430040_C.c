#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax=0, ay=0, bx=0, by=0, cx=0, cy=0;
    double x, y, z;
    printf("");
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
    if (bx - ax != 0 && cx-ax !=0 && cx-bx != 0){
        x = (double)(by-ay)/(bx-ax);
        y = (double)(cy-ay)/(cx-ax);
        z = (double)(cy-by)/(cx-bx);
        if(x==y && x==z && y==z){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}
