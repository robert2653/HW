#include <stdio.h>

int main() {
    long num1, num2, result;
    char operator;

    scanf("%ld %ld %c", &num1, &num2, &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;

    }

    printf("%ld\n", result);

    return 0;
}
