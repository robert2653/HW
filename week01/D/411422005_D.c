#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2;
    double cross,a,b,c,d;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);

    a=b1-a1;
    b=b2-a2;
    c=c1-a1;
    d=c2-a2;

    cross=a*d-c*b;

    if(cross>0){
        printf("Left");
    }else if(cross<0){
        printf("Right");
    }else{
        printf("Touch");
    }

    return 0;
}
