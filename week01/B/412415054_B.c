#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,d;
    char c;

    scanf("%lld %lld %c",&a,&b,&c);

    if(c == '+'){
        d = a+b;
        printf("%lld",d);
    }
    if(c == '-'){
        d = a-b;
        printf("%lld",d);
    }
    if(c == '*'){
        d = a*b;
        printf("%lld",d);
    }

    return 0;
}
