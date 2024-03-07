#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int num;
    scanf("%ld",&num);
    long int array[num],in=0,ch=0;
    while(in<num)
    {
        scanf("%ld",&array[in]);
        in++;
    }
    for(int i=0;i<num;i++)
    {
        if(array[i]==1)
        {
            printf("No\n");
        }
        else if(array[i]==2)
        {
            printf("Yes\n");
        }
        else
        {
            for(int com=2;com<=sqrt(array[i])+1;com++)
            {
                if(array[i]%com==0)
                {
                    printf("No\n");
                    ch=1;
                    break;
                }
            }
            if(ch==0)
            {
                printf("Yes\n");
            }
            ch=0;
        }
    }

    return 0;
}
