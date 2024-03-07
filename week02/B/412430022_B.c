#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num=0,k=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        int flag=1;
        scanf(" %d",&k);
        if(k==1)
        {
            printf("No\n");
            continue;
        }
        else
        {
            if(k==2 || k==3 || k==5 || k==7)
            {
                printf("Yes\n");
                continue;
            }
            if(k%2==0 || k%3==0 )
            {
                printf("No\n");
                continue;
            }
            for(int j=1;sqrt(k)>=(6*j-1);j++)
            {
                if((k%(6*j-1)==0) ||(k%(6*j+1)==0))
                {
                    printf("No\n");
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                printf("Yes\n");
            }
        }

    }
    return 0;
}
