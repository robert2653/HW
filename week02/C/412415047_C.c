#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tree,i,j;
    scanf("%d",&tree);
    for(i=0;i<tree;i++)
    {
        if(i!=tree-1)
        {
            for(j=0;j<2*tree-1;j++)
            {
                if(j==tree-i-1 || j==tree+i-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                if(j==tree+i-1)
                {
                    break;
                }
            }
        }
        else
        {
            for(j=0;j<2*-tree-1;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<tree;i++)
    {
        for(j=1;j<tree;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
