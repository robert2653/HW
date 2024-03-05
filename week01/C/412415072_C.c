#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    if((by-ay)*(cx-bx)==(cy-by)*(bx-ax))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
