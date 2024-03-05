#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    if(c=='+'){
        printf("%lld",a+b);
    }
    else if(c=='-'){
        printf("%lld",a-b);
    }
    else if(c=='*'){
        printf("%lld",a*b);
    }
    return 0;
}
