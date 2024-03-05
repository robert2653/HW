#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b,sum;
    char space,word;
    scanf("%ld %ld",&a,&b);
    scanf("%c %c",&space,&word);
    if(word==42)
    {
        sum=a*b;
    }

    else if(word==43)
    {
        sum=a+b;
    }

    else if(word==45)
    {
        sum=a-b;
    }

    printf("%ld",sum);
    return 0;
}
