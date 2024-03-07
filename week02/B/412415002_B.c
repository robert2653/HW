#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        int ans = 1;
        if(x<2)
        {
            ans = 0;
        }
        else
        {
            for(j=2;j<=sqrt(x);j++)
            {
            if(x%j==0)
                {
                    ans=0;
                    break;
                }
            }
        }
        a[i]=ans;
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("No\n");;
        }
        else
        {
            printf("Yes\n");
        }
    }



    return 0;
}
