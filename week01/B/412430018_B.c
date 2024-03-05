#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, num;
    char c;

    scanf("%lld %lld %c", &a, &b, &c);

    switch(c){
        case'+':
            num = a + b;
            break;
        case'-':
            num = a - b;
            break;
        case'*':
            num = a * b;
            break;
        case'/':
            if(b != 0){
                num = a / b;
            }else{
                return 1;
            }
            break;
        default:
            return 1;
    }
    printf("%lld\n", num);

    return 0;
}
