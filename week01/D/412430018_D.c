#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a1, a2, b1, b2, c1, c2;

    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2, &b1, &b2, &c1, &c2);

    long long int result = (a1 - c1) * (b2 - c2) - (a2 - c2) * (b1 - c1);
    if(result == 0){
           printf("Touch");
       }else if(result < 0){
           printf("Right");
       }else{
           printf("Left");
       }
    return 0;
}