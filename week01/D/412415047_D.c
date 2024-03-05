#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   long ax,ay,bx,by,cx,cy,dx,dy,ex,ey,z1;
   long double m1,m2,S;

   scanf("%ld %ld %ld %ld %ld %ld",&ax,&ay,&bx,&by,&cx,&cy);
   m1=((ay-by)/(ax-bx));
   m2=((cy-by)/(cx-bx));
   S=(((ax*by)+(bx*cy)+(cx*ay))-((ax*cy)+(bx*ay)+(cx*by)));
   dx=bx-ax;
   dy=by-ay;
   ex=cx-ax;
   ey=cy-ay;
   z1=((dx*ey)-(ex*dy));

   if(S==0)
   {
       printf("Touch");
   }
   else if(((ax-bx)==0)&&((cx-bx)==0))
   {
       printf("Touch");
   }
   else if(z1 < 0)
   {
       printf("Right");
   }
   else if(z1 > 0)
   {
       printf("Left");
   }
    return 0;
}
