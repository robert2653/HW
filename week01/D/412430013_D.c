#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x1,y1,x2,y2,x3,y3;
   double a;

   scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

   a = (x2-x1) * (y3-y1) - (y2-y1)*(x3-x1);

   if (a > 0){
     printf("left");

   } else if (a < 0) {
       printf("right");

   } else{
       printf("touch");
   }


}
