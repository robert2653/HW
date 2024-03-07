#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, num=0, result=0;
    printf("");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        scanf("%d",&num);
        result ^= num;
    }

    printf("%d",result);

    return 0;
}
