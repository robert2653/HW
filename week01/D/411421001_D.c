#include<stdio.h>
int main(){
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);

    double m=(c-a)*(f-b)-(e-a)*(d-b);
    if(m>0){
        printf("Left");
    }
    else if(m<0){
        printf("Right");
    }
    else if(m==0){
        printf("Touch");
    }
}
