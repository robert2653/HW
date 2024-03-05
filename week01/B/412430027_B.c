#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a , b , result;
    char op;
    scanf("%lld %lld",&a,&b);
    scanf(" %c",&op);

    switch(op){
    case '+':
        result = a + b;
        printf("%lld",result);
        break;

    case '-':
        result = a - b;
        printf("%lld",result);
        break;

    case '*':
        result = a * b;
        printf("%lld",result);
        break;

    }

}
