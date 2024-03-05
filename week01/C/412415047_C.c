#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   long ax,ay,bx,by,cx,cy;
   long double m1,m2,S;

   scanf("%ld %ld %ld %ld %ld %ld",&ax,&ay,&bx,&by,&cx,&cy);
   m1=((ay-by)/(ax-bx));
   m2=((cy-by)/(cx-bx));
   S=(((ax*by)+(bx*cy)+(cx*ay))-((ax*cy)+(bx*ay)+(cx*by)));
   if(S==0)
   {
       printf("Yes");
   }
   else if(((ax-bx)==0)&&((cx-bx)==0))
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }
    return 0;
}
