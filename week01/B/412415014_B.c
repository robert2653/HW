#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long num1, num2, num3;
    char c;
    scanf("%ld %ld %c",&num1,&num2,&c);
    switch(c){
        case '+':
            num3 = num1+num2;
            printf("%ld",num3);
            break;
        case '-':
            num3 = num1-num2;
            printf("%ld",num3);
            break;
        case '*':
            num3 = num1*num2;
            printf("%ld",num3);
            break;
        default :
            printf("error");
            break;
    }
    return 0;
}
