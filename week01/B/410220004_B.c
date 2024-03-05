#include <stdio.h>

int main(void)
{
    long long a = 0,
        b = 0;
    char c;
    scanf("%lld %lld %c", &a, &b ,&c);
    if(c == '+'){
        printf("%lld", a+b);
    }else if(c == '-'){
        printf("%lld", a-b);
    }else{
        printf("%lld", a*b);
    }

    return 0;
}
