#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a,b;
    char c;
    scanf("%ld", &a);
    scanf("%ld", &b);
    scanf(" %c",&c);

    switch(c)
    {
        case '+':
        printf("%ld",a+b);
        break;
        case '-':
        printf("%ld",a-b);
        break;
        case '*':
        printf("%ld",a*b);
        break;
    }
    return 0;
}
