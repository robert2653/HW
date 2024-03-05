#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a , b , c;
    char d;
    scanf("%lld %lld", &a, &b);
    scanf(" %c", &d);
    switch(d){
case '+':
    c = a + b;
    printf("%lld",c);
    break;
case'-':
    c = a - b;
    printf("%lld",c);
    break;
case'*':
    c = a * b;
    printf("%lld",c);
    break;

    }


}
