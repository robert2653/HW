#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num[200000], x = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &num[i]);
        x = x ^ num[i];
        //printf("%d*", x);
    }
    if(x == 0)
        printf("0");
    else
        printf("%d", x);
    return 0;
}
