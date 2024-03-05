#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long Ax, Ay, Bx, By, Cx, Cy;
    scanf("%lld %lld %lld %lld %lld %lld",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
        if((Ay-By)*(Ax-Cx) == (Ay-Cy)*(Ax-Bx)){
           printf("Yes");
        }else{
           printf("No");
        }
    return 0;
}
