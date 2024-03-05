#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a, b;
    long int ans;
    char s;
    scanf("%ld %ld %c",&a,&b,&s);
    if(s=='+')
    {
        ans=a+b;
        printf("%ld", ans);
    }
    else if(s=='-')
    {
        ans=a-b;
        printf("%ld", ans);
    }
    else
    {
        ans=a*b;
        printf("%ld", ans);
    }
    return 0;
}
