#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0,k=0,s=0;
    scanf("%d",&n);
    s=n;
    for(int i=1;i<=n;i++)
    {
        for(int i=s-1;i>0;i--)
        {
            printf(" ");

        }
        s=s-1;
        if(k==0)
        {
            printf("*\n");
            k++;
        }
        else if(i!=n)
        {
            printf("*");
            for(int i=1;i<=k;i++)
            {
                printf(" ");
            }
            printf("*\n");
            k=k+2;
        }
        else
        {
            for(int i=1;i<n+n-1;i++)
            {
                printf("*");
            }
            printf("*\n");
        }
    }
    for(int j=0;j<n;j++)
    {
        for(int i=1;i<n;i++)
        {
            printf(" ");

        }
        printf("*\n");

    }



    return 0;
}
