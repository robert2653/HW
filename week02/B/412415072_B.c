#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(b[i]<=1)
        {
            printf("No\n");
            continue;
        }
        int c=1;
        for(int j=2;j*j<=b[i];j++)
        {
            if(b[i]%j==0)
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
