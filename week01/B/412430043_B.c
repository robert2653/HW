#include <stdio.h>
#include <stdlib.h>

int main() {
    long int a, b, d;
    char c;
    scanf("%ld %ld %c", &a, &b, &c);
    if (c == '+') {
        d = a + b;
        printf("%ld", d);
    }
    if (c == '-') {
        d = a - b;
        printf("%ld", d);
    }
    if (c == '*') {
        d = a * b;
        printf("%ld", d);
    }
    return 0;
}