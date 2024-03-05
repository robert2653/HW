#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a , b , sum;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    switch(c)
    {
    case'+':
    {
        sum = a + b;
        printf("%lld",sum);
        break;
    }
    case'-':
    {
        sum = a - b;
        printf("%lld",sum);
        break;
    }
    case'*':
    {
        sum = a * b;
        printf("%lld",sum);
        break;
    }
    }
    return 0;
}
