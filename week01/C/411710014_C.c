#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
int main()
{
    long x1,x2,y1,y2,z1,z2;
   
    scanf("%ld %ld %ld %ld %ld %ld",&x1,&x2,&y1,&y2,&z1,&z2);
if(x1*(y2-z2)+y1*(z2-x2)+z1*(x2-y2)==0)
{
printf("YES");
}else{
    printf("No");
}
    return 0;
}