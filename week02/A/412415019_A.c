#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, a=0;
    scanf("%d", &n);
    int num[n+10];
    for(i=1;i<=n;i++){
        scanf("%d", &num[i]);
        a ^= num[i];
    }
    printf("%d", a);
    return 0;
}
