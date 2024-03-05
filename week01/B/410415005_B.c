#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, sum;
    char c;
    scanf("%lld %lld %c",&a,&b,&c);
    switch(c){
  case'+':
    sum=a+b;
    break;
  case'-':
    sum=a-b;
    break;
  case'*':
    sum=a*b;
    break;
    }
    printf("%lld",sum);
    return 0;
}
