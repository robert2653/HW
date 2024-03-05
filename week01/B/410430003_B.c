#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a,b;
    char c;
    scanf("%ld %ld %c", &a,&b,&c);
    if(c=='+'){
        printf("%ld", a+b);
    }
    if(c=='-'){
        printf("%ld", a-b);
    }
    if(c=='*'){
        printf("%ld", a*b);
    }
    return 0;
}