#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a;
    long long b;
    char c;
    long long sum;
    scanf("%lld %lld %c",&a,&b,&c);
    switch(c){
    case'+':
    sum=a+b;
    printf("%lld",sum);
    break;
    case'-':
    sum=a-b;
    printf("%lld",sum);
    break;
    case'*':
    sum=a*b;
    printf("%lld",sum);
    break;
    default:
        printf("error");
    }
    return 0;
}
