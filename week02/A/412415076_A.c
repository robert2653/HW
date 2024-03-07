#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n,num;
    scanf("%lld",&n);
    int i=0,k=0;
    for(i=0;i<n;i++){
        scanf("%lld",&num);
        k^=num;
    }

    printf("%d\n",k);

    return 0;
}
