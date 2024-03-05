#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long long int a, b;
    char c;
    scanf("%lld %lld %c", &a, &b, &c);

    long long int res = 0;
    switch(c) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        default:
            res = a * b;
    }
    
    printf("%lld", res);
    return 0;
}