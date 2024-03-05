#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a , b , d;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    if(c=='+'){
        d = a + b;
    }
    else if(c=='-'){
        d = a - b;
    }
    else if(c=='*'){
        d = a * b;
    }
    printf("%lld\n",d);
    return 0;
}
