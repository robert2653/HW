#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,number,result=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number);
        result^=number;
    }
    printf("%d",result);
    return 0;
}
