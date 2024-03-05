#include<stdio.h>
int main(){
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    ;
    if (a!=c || b!=d){
        if((c-a)/(d-b)==(e-c)/(f-d)){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}
