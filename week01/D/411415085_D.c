#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int ax,ay,bx,by,cx,cy;
    long long int x1,x2,y1,y2;

    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);

    x1=cx-bx;
    y1=cy-by;
    x2=ax-bx;
    y2=ay-by;

    if(x1*y2-x2*y1>0){
      printf("Left\n");
    }
    else{
          if(x1*y2-x2*y1<0)
             printf("Right\n");
          else
             printf("Touch");
}
    return 0;
}
