#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int a, b;
    char c;

    scanf(" %lld %lld %c", &a, &b, &c);

    switch(c){
        case '+' :
            printf("%lld\n", a + b);
            break;

        case '-' :
            printf("%lld\n", a - b);
            break;

        case '*' :
            printf("%lld\n", a * b);
            break;

    }
    return 0;
}
