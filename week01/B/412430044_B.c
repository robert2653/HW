#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a, b ;
    char s;
    scanf("%ld %ld %c",&a,&b,&s);


    if(s=='+'){
            printf("%ld",a+b);
    }
    else if (s=='-'){
       printf("%ld",a-b);
    }
    else if(s=='*'){
            printf("%ld",a*b);
    }
}
