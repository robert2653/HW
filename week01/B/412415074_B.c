#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,d;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);

    switch(c){
        case '+':
        d=a+b;
        break;

        case '-':
        d=a-b;
        break;

        default:
        d=a*b;
        break;
    }
    printf("%lld",d);



    return 0;
}
