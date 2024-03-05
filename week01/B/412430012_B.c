#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,result;

    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    switch(c)
    {
        case '+':
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        default:
            printf("Error!!!!\n");
    }


    printf("%lld",result);
    return 0;
}
