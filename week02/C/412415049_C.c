#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,i,j;  //i北︽计  j北–︽秨繷计秖
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)
    {
        for(j=i;j<rows;j++)
        {
            printf(" ");
        }

    for(j=1;j<= i*2-1;j++)
        if(j == 1 || j == i*2-1 || i == rows)
    {
         printf("*");
    }else{   printf(" ");}
     printf("\n");
    }
    for(i=0;i<=rows-1;i++)
    {
        for(j =1;j<=rows-1;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}

