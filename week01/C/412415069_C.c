#include<stdio.h>
int main()
{
    long int x1,y1,x2,y2,x3,y3;
    float a,b,c;
   scanf("%ld %ld %ld %ld %ld %ld",&x1,&y1,&x2,&y2,&x3,&y3);
    a=(float)(y1-y2)/(x1-x2);
    b=(float)(y2-y3)/(x2-x3);
    c=(float)(y3-y1)/(x3-x1);
   if(x1==x2)
   {
       printf("NO");
       return 0;
   }

   if(a==b && b==c && a==c)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }







}
