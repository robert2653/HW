#include <stdio.h>

int main(){
    long long int a1,a2,b1,b2,c1,c2,ab1,ab2,ac1,ac2,s;
    scanf("%lld %lld %lld %lld %lld %lld",&a1,&a2,&b1,&b2,&c1,&c2);
    ab1=b1-a1;
    ab2=b2-a2;
    ac1=c1-a1;
    ac2=c2-a2;
    s=ab1*ac2-ab2*ac1;

    if(s>0){
        printf("Left");
    }
    else if(s<0){
        printf("Right");
    }
    else if(s==0){
        printf("Touch");
    }

    return 0;
}