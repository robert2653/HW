#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long a,b;
char c;

int main()
{
    scanf("%lld%lld %c",&a,&b,&c);
    switch(c){
        case'+':
            printf("%lld",a+b);
            break;
        case'-':
            printf("%lld",a-b);
            break;
        case'*':
            printf("%lld",a*b);
            break;
    }
    return 0;
}
