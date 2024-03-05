#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a, b;
    long ans=0;

    char c;

    scanf("%ld %ld %c", &a, &b, &c);

    if(c == '+'){
        printf("%ld", a+b);
    }
    else if(c == '-'){
        printf("%ld", a-b);
    }
    else{
        ans=a*b;
        printf("%ld", ans);
    }
    return 0;
}
