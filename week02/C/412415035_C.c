#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumLine;
    scanf("%d",&sumLine);
    int line=0;
    for(int i=0;i<sumLine-1;i++)
    {
        for(int j=0;j<sumLine-i-1;j++)//*號前的空格
        {
            printf(" ");
        }
        printf("*");
        if(line!=0)//*號後的空格和第二個*號
        {
            for(int k=0;k<2*line-1;k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        line++;
    }
    for(int i=0;i<2*sumLine-1;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=0;i<sumLine;i++)
    {
        for(int j=0;j<sumLine-1;j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}
