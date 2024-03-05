#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=1000000000&&a>=-1000000000&&b<=1000000000&&b>=-1000000000){
        printf("%d",a+b);
    }
    else
        printf("number is not in the range");

}
