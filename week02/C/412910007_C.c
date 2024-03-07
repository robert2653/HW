#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    scanf("%d",&a);


    for(int i=0;i<a-1;i++)
    {
        printf(" ");
    }
    printf("*\n");


    for(int i=1;i<a-1;i++)
    {
        for(int j=a-1-i;j>0;j--)
        {
            printf(" ");
        }
        printf("*");
        for(int j=1;j<2*i;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }


    for(int i=0;i<2*a-1;i++)
    {
        printf("*");
    }
    printf("\n");


    for(int i=0;i<a-1;i++)
    {
        for(int i=0;i<a-1;i++)
        {
            printf(" ");
        }
        printf("*\n");
    }


    for(int i=0;i<a-1;i++)
    {
        printf(" ");
    }
    printf("*\n");

}
