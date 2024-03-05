#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b;

    char c;
    scanf("%d %d %c",&a,&b,&c);

    switch(c)
    {


    case '+':
        printf("%d\n",a+b);
        break;



    case '-':
        printf("%d\n",a-b);
        break;



    case '*':
        printf("%d\n",a*b);
        break;
}

    return 0;
}
