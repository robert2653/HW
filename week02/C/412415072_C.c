#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(i!=a-1)
        {
            for(j=0;j<2*a-1;j++)
            {
                if(j==a-i-1 || j==a+i-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                if(j==a+i-1)
                {
                    break;
                }
            }
        }
        else
        {
            for(j=0;j<2*a-1;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=1;j<a;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
