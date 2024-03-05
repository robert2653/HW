#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b;
    char c;

    scanf("%lld %lld %c", &a, &b, &c);

    long long int sum;
    switch(c){
        case '+':
            sum = a + b;
            printf("%lld",sum);
            break;

        case '-':
            sum = a - b;
            printf("%lld",sum);
            break;

        case '*':
            sum = a * b;
            printf("%lld",sum);
            break;

        default:
            break;
    }

    return 0;
}
