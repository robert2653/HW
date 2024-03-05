#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int ax,ay,bx,by,cx,cy;
    double slope1, slope2;

    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);

    slope1=(double)(ay-by)/(ax-bx);
    slope2=(double)(by-cy)/(bx-cx);

    if(slope1==slope2){

    printf("Yes\n");
    }
    else{
    printf("No\n");
    }

    return 0;
}
