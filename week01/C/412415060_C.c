#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    float m1,m2,m3;

    if(bx-ax == 0){
        printf("No");
        return 0;
    }
    m1 = (float)(by-ay) / (bx-ax);
    m2 = (float)(cy-by) / (cx-bx);
    m3 = (float)(cy-ay) / (cx-ax);

    if(m1==m2 && m2==m3 && m3==m1){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}
