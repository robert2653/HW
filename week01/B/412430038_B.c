#include <stdio.h>
#include <stdlib.h>

int main(){
    long long a, b;
    long long r;
    char c;
    scanf("%lld %lld %c",&a, &b, &c);
    switch(c){
        case '+':
            r = a + b;//相加
            printf("%lld",r);
            break;
        case '-':
            r = a - b;//相減
            printf("%lld",r);
            break;
        case '*':
            r = a * b;//相乘
            printf("%lld",r);
            break;

        default:
            break;

    }
    return 0;
}
