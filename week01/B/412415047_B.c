#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    long a,b,star;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);
    if(c=='+')
    {
        star=a+b;
    }
    else if(c=='-')
    {
        star=a-b;
    }
    else
    {
        star=a*b;
    }
    printf("%ld",star);
    return 0;
}
