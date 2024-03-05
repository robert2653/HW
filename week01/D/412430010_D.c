#include <stdio.h>

int main(){
    long long int a1 , a2 , b1 , b2 , c1 , c2 ;
    scanf("%lld %lld %lld %lld %lld %lld",&a1, &a2, &b1, &b2, &c1, &c2);
    long long int Area;
    Area = a1*(b2-c2)+b1*(c2-a2)+c1*(a2-b2);
    if(Area){
        if(Area > 0){
            printf("Left\n");
        }
        else{
            printf("Right\n");
        }
    }
    else{
        printf("Touch\n");
    }
    return 0;
}
