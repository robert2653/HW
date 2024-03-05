#include <stdio.h>
#include <stdlib.h>

int main()
{
 double x1,x2,y1,y2,z1,z2;
 scanf("%lf %lf %lf %lf %lf %lf",&x1,&x2,&y1,&y2,&z1,&z2);
 if((y2-x2)/(y1-x1)==(z2-x2)/(z1-x1)&&(z2-x2)/(z1-x1)==(z2-y2)/(z1-y1)&&(y2-x2)/(y1-x1)==(z2-y2)/(z1-y1)){
    printf("Yes");
 }
 else{ printf("No");

}

}
