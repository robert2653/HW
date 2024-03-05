#include <stdio.h>

int main()
{
    long long int x1, y1, x2, y2, x3, y3;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);

    if((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)>0){
        printf("Left");
    }
    else if((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1)<0){
        printf("Right");
    }
    else
        printf("Touch");


    return 0;
}
