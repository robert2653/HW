#include<stdio.h>
int main()
{
    long int a, b;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);

    switch(c)
    {
    case '+':
        {
            printf("%ld",a+b);
            break;
        }

    case '-':
        {
            printf("%ld",a-b);
            break;
        }

    case '*':
        {
            printf("%ld",a*b);
            break;
        }

    }
}
