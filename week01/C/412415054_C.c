#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);

    double m,n;
    m = (double)(d-b)/(c-a);
    n = (double)(f-d)/(e-c);

    if(m==n){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
