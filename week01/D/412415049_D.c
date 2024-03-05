#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
    long long int t;
    t=(b-d)*e+(c-a)*f+a*d-c*b;
    if(t>0)
    {printf("Left");}
    else if(t<0)
    {
        printf("Right");
    }
    else printf("Touch");
    return 0;
}
