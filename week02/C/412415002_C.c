#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    //�Ĥ@�h
    for(i=1;i<n;i++)
    {
        printf(" ");
    }
    printf("*\n");
    //�Ĥ@�h
    //�ĤG�h
    for(i=1;i<=n-2;i++)//���
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
    //�ĤG�h
    //����
    for(i=0;i<2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    //����
    //��F
    for(j=1;j<=n;j++)
    {
        for(i=1;i<n;i++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    //��F
    return 0;
}
