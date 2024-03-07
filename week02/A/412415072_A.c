#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0,i;
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&b);
        c^=b;
    }
    if (c!=0)
    {
        printf("%d",c);
    }
    else
    {
        printf("0");
    }

    return 0;
}
