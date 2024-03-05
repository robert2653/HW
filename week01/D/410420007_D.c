#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf %lf %lf /n",&a,&b,&c,&d,&e,&f);
    if((c-a)*(f-b)-(d-b)*(e-a)==0){
        printf("Touch");
    }else if((c-a)*(f-b)-(d-b)*(e-a)>0){
        printf("Left");
        }else if((c-a)*(f-b)-(d-b)*(e-a)<0){
        printf("Right");
    }
}