#include <stdio.h>
#include <stdlib.h>



int main()
{
    long long int n=0;
    long long int num=0;
    long long int result=0;
    scanf("%lld",&n);


    int i;
    for(i=0;i<n;++i)
    {
        scanf("%lld",&num);
        result ^= num;
    }

    printf("%lld\n",result);


    return 0;
}