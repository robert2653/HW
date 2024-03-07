#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lay,i,j,num;

    scanf("%d",&lay);
    num=lay*2-1;
    for(i=0;i<lay-1;i++)
    {
        for(j=1;j<=num;j++)
        {
            if (j==(lay+i) && j==(lay+i))
            {
                printf("*");
                break;
            }

            else if(j==lay-i)
            {
                printf("*");
            }

            else if (j==(lay+i))
            {
                printf("*");
                break;
            }

            else
            {
               printf(" ");
            }

        }
        printf("\n");
    }

    for(j=1;j<=num;j++)
    {
      printf("*");
    }
    printf("\n");
    for(j=1;j<=lay;j++)
    {
      for(i=1;i<lay;i++)
      {
        printf(" ");
      }
      printf("*\n");
    }

    return 0;
}
