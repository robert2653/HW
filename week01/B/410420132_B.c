#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    long long b, c;
    scanf("%lld%lld %c", &b, &c, &a);


    switch(a){
    case '+':
        printf("%lld", b+c);
        break;
    case '-':
        printf("%lld", b-c);
        break;
    case '*':
        printf("%lld", b*c);
        break;
    default:
        break;



    }

    return 0;
}
