#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);

    if((c-a)*(f-b)-(d-b)*(e-a)>0){
        printf("Left");
    }
    if((c-a)*(f-b)-(d-b)*(e-a)<0){
        printf("Right");
    }
    if((c-a)*(f-b)-(d-b)*(e-a)==0){
        printf("Touch");
    }


    return 0;
}
