#include <stdio.h>
#include <stdlib.h>

int main()
{

    int layer, wide;
    scanf("%d",& layer);
    wide = 2 * layer - 1;

    for(layer =0; layer <= (wide/2) - 1; layer++)
    {
        for(int i = (wide / 2)- layer; i > 0; i--)
        {
            printf(" ");
        }
        printf("*");

        for(int l = 2 * layer - 1; l>0; l--)
        {
            printf(" ");
        }

        if(layer != 0)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < wide; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int a = 0; a <(wide / 2)+ 1; a++)
    {
        for(int b = 0; b < wide/2; b++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
