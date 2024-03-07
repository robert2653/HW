#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    int num[a];
    for(int b=0;b<a;b++)
    {
        scanf("%d",&num[b]);
    }
    if(a%2==0)
    {
        printf("0");
    }
    else
    {
        for(int b=0;b<a;b++)
        {
            num[b+1]=num[b]^num[b+1];
        }
        printf("%d",num[a-1]);
    }

    return 0;
}
