#include <stdio.h>

int main(){
    long long int a1 , a2 , b1 , b2 , c1 , c2 ;
    scanf("%lld %lld %lld %lld %lld %lld",&a1, &a2, &b1, &b2, &c1, &c2);
    long long int Area;
    Area = a1*(b2-c2)+b1*(c2-a2)+c1*(a2-b2);
    if(Area){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    return 0;
}

