#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    double a , b , c , d , e , f ;
    scanf("%lf %lf %lf %lf %lf %lf/n" , &a , &b , &c , &d , &e , &f );
    if((d-b)/(c-a)==(f-d)/(e-c)){
        printf("Yes");
    }
    else {
        printf("No");
    }
}