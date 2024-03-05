#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);
    if(c == '+'){
        printf("%ld",a + b);
    }else if(c == '-'){
        printf("%ld",a - b);
    }else if(c == '*'){
        printf("%ld",a * b);
    }

    return 0;
}
