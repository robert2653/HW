#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long long int a,i,j;
    int num;
    double b;
    int k;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%lld",&a);
        k=0;
        b=pow(a,0.5);
        if (a==1)
        {
            printf("No\n");
            k=1;
            continue;
        }
        for(j=2;j<=b;j++)
        {

            if(a==2)
            {
              printf("Yes\n");
              k=1;
              break;
            }

            else if((a%j)==0)
            {
                printf("No\n");
                k=1;
                break;
            }

        }

        if(k==0)
        {
            printf("Yes\n");
        }
    }


    return 0;
}
