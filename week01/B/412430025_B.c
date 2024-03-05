#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a , b ;
    char c;
    scanf("%ld %ld %c", &a , &b , &c) ;

    switch(c){
        case '+':
            printf("%ld",a + b);
            break;

        case '-':
            printf("%ld",a - b);
            break;

        case '*':
            printf("%ld",a * b);
            break;
        }



    return 0;
}
