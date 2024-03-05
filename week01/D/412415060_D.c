#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    if((ax-cx)*(by-cy)-(ay-cy)*(bx-cx)==0){
        printf("Touch");
    }
    else if((ax-cx)*(by-cy)-(ay-cy)*(bx-cx)>0){
        printf("Left");
    }
    else if((ax-cx)*(by-cy)-(ay-cy)*(bx-cx)<0){
        printf("Right");
    }
}
