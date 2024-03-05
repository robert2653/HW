#include <stdio.h>

int main() {
    long long a=0,b=0,d=0;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    if(c=='+')
    {
        d=a+b;
    }
    else if(c=='-')
    {
        d=a-b;
    }
    else if(c=='*')
    {
        d=a*b;
    }
   
    printf("%lld",d);
    
    return 0;
}