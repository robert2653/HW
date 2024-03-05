#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy,A;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    A=(ax-cx)*(by-cy)-(bx-cx)*(ay-cy);
    if (A==0){
        printf("Yes");
    }
    else{
        printf("No");
    }


    return 0;
}
