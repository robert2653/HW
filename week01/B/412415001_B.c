#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b;
    char c;
    scanf("%lld%lld %c", &a, &b, &c);
    if(c == '*')
        printf("%lld", a * b);
    if(c == '+')
        printf("%lld", a + b);
    if(c == '-')
        printf("%lld", a - b);
    return 0;
}