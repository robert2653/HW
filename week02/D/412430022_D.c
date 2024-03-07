#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0,k=0,s=0,a=0,min=10,minn=10,odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf(" %d %d",&k,&s);
        for(int j=1;j<=k;j++)
        {
            scanf(" %d",&a);
            if(a%2==0)
            {
                odd++;
            }

            if(a%s!=0)
            {
                minn=s-a%s;
            }
            else
            {
                minn=0;
            }

            if(minn<min)
            {
                min=minn;
            }
        }
        if(s==4 && k>=2)
        {
            if(odd>=2)
            {
                min=0;
            }
            else
            {
                minn=2-odd;
                if(minn<min)
                {
                    min=minn;
                }
            }
        }
        printf("%d\n",min);
        min=10;
        minn=10;
        odd=0;
    }
    return 0;
}