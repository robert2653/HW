#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy;
    long long int e,f,g,h,z;
    scanf("%lld %lld",&ax,&ay);
    scanf("%lld %lld",&bx,&by);
    scanf("%lld %lld",&cx,&cy);
    e=ax*by+bx*cy+cx*ay;
    h=bx*ay+cx*by+ax*cy;
    z=e-h;
    if(z==0){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}
