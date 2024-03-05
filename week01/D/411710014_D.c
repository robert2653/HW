#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

int main()
{
    //A(x1,y1) B(x2,y2) C(x3,y3)
    double x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
    double A=0,B=0,C=0,D=0;
    //Ax+By+C=0
    //A=y2-y1,B=x1-x2,C=x2*y1-x1*y2
    //D=A*x3+B*y3+C

    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    
    A=y2-y1;
    B=x1-x2;
    D=A*x3+B*y3+x2*y1-x1*y2;

    //m=slope, y=mx+b,b=y-mx
    if(D==0){
        printf("Touch");
    }else if(D<0){
            printf("Left");
    }else{
            printf("Right");
        }
    return 0;
}