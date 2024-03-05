#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int ax,ay,bx,by,cx,cy;
    long long int s;
    printf("");
    scanf("%lld%lld%lld%lld%lld%lld",&ax,&ay,&bx,&by,&cx,&cy);
    s=(cy-ay)*(bx-ax)-((by-ay)*(cx-ax));
    if(s>0){
        printf("Left");
    }
    else if(s<0){
        printf("Right");
    }
    else{
        printf("Touch");
    }
    return 0;
}
