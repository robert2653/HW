#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
    float t,T,k,q,u,i;
    k=(d-b);
    q=(c-a);
    t=k/q;

    u=f-b;
    i=e-a;
    T=u/i;

    if(t==T)
        {printf("Yes");}
    else
    {printf("No");}
    return 0;
}
