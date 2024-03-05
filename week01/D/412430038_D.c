#include<stdio.h>
#include <stdlib.h>

int main(){
    long long a1 , a2 , b1 , b2 , c1 , c2 ;
    scanf("%lld %lld %lld %lld %lld %lld",&a1,&a2,&b1,&b2,&c1,&c2);

    long long m1 = b1 - a1;//計算向量
    long long m2 = b2 - a2;
    long long n1 = c1 - a1;
    long long n2 = c2 - a2;

    long long r = (m1 * n2) - (m2 * n1);//計算外積

    if(r>0){
        printf("Left");
    }
    if(r<0){
        printf("Right");
    }
    if(r==0){
        printf("Touch");
    }

    return 0;
}
