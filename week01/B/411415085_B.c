#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long long int a, b, result;
    char c;

    scanf("%lld %lld %c", &a, &b, &c);

    switch (c){
        case '+':
            result = a + b;
            printf("%lld\n", result);
            break;
        case '-':
            result = a - b;
            printf("%lld\n", result);
            break;
        case '*':
            result = a * b;
            printf("%lld\n", result);
            break;
    }

    return 0;
}