#include <stdio.h>
#include <stdlib.h>

int main(){

    long long a, b;
    char operator;

    scanf("%lld %lld %c", &a,&b,&operator);

    switch(operator){
    case '+':
    printf("%lld",a+b);
    break;

    case '-':
    printf("%lld",a-b);
    break;

    case '*':
    printf("%lld",a*b);
    break;

    case '/':
    printf("%lld",a/b);
    break;
    }

    return 0;
}
