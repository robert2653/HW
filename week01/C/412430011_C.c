#include <stdio.h>
#include <stdlib.h>

int main()
{   long long int ax,ay,bx,by,cx,cy;
    printf("");
    scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
    if((ax*by+bx*cy+cx*ay-ay*bx-by*cx-ax*cy)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    printf("");
    return 0;
}
