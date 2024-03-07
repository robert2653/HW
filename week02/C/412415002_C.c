#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    //第一層
    for(i=1;i<n;i++)
    {
        printf(" ");
    }
    printf("*\n");
    //第一層
    //第二層
    for(i=1;i<=n-2;i++)//行數
    {
        for(j=0;j<=n-2-i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(j=1;j<=2*i-1;j++)
        {
            printf(" ");
        }
        printf("*");
    printf("\n");
    }
    //第二層
    //底部
    for(i=0;i<2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    //底部
    //樹幹
    for(j=1;j<=n;j++)
    {
        for(i=1;i<n;i++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    //樹幹
    return 0;
}
