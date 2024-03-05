#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
int main()
{
    long a,b,d;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);


    if(c=='+')
    {
        d=a+b;
    }
    else if(c=='-')
    {

        d=a-b;
    }
    else
    {

        d=a*b;
    }

    printf("%ld",d);

    return 0;
}
