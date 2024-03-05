#include <stdio.h>
#include <stdlib.h>



int main()
{
    long long int ax,ay,bx,by,cx,cy;
    long long int e,f,g,h,z;
    scanf("%lld %lld",&ax,&ay);
    scanf("%lld %lld",&bx,&by);
    scanf("%lld %lld",&cx,&cy);
    e=ax-bx;
    f=ay-by;
    g=bx-cx;
    h=by-cy;

    z=e*h-f*g;
    if(z>0){
        printf("Left");
    }
    else if(z<0){
        printf("Right");
    }
    else{
        printf("Touch");
    }

    return 0;
}
