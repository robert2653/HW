#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n1,n2,n3;
    char type[80];
    scanf("%ld %ld %s",&n1,&n2,type);
    if(type[0]=='+')
        {
            n3=n1+n2;
        }
    if(type[0]=='-')
        {
            n3=n1-n2;
        }
    if(type[0]=='*')
        {
            n3=n1*n2;
        }
    printf("%ld",n3);
    return 0;
}
