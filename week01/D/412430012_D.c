#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy,Z;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    
    Z=(ax-cx)*(by-cy)-(ay-cy)*(bx-cx);
    
    if(Z==0){
        printf("Touch");
    }
    else if (Z<0){
        printf("Right");
    }
    else{
        printf("Left");
    }
    
    
    
    
    return 0;
}