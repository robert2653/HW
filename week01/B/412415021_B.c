#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a, b, ans;
    char c;
    scanf("%ld %ld %c", &a, &b, &c);
    switch(c){
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '*':
        ans = a * b;
        break;
    }
    printf("%ld", ans);
    return 0;
}
