#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f,g;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
    g=(c-a)*(f-b)-(e-a)*(d-b);
    if(g<0){
        printf("Right");
    }
    else if(g>0){
        printf("Left");
    }
    else{
        printf("Touch");
    }

    return 0;
}
