#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c;
    char d;
    scanf("%lld %lld %c",&a,&b,&d);

    switch(d)
    {
        case '+':
        c = a+b;
        break;

        case '-':
        c = a-b;
        break;

        case '*':
        c = a*b;
        break;
    }
    printf("%lld",c);
    return 0;
}
