#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,k,judge=100,i,compare=100;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        compare = 100;
        judge = 100;
        int even=0;
        scanf("%d %d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }//輸入

        if(k==1)//倍數=1
        {
            printf("0\n");
        }

        if(k==2)//倍數=2
        {
            for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    judge=0;
                }
                else
                {
                    judge = 1;
                }
                if(compare>judge)
                {
                    compare=judge;
                }
            }printf("%d\n",compare);

        }
        if(k==3)//倍數=3
        {
            for(i=0;i<n;i++)
            {
                if(a[i]%3==0)
                {
                    judge = 0;
                }
                if(a[i]%3!=0 && a[i]%3==2)
                {
                    judge = 1;
                }
                if(a[i]%3!=0 && a[i]%3!=2&& a[i]%3==1)
                {
                    judge = 2;
                }
                if(compare>judge)
                {
                    compare = judge;
                }
            }printf("%d\n",compare);

        }
        if(k==5)//倍數=5
        {
            for(i=0;i<n;i++)
            {
                if(a[i]%5==0)
                {
                    judge = 0;
                }
                if(a[i]%5!=0 && a[i]%5==4)
                {
                    judge = 1;
                }
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5==3)
                {
                    judge = 2;
                }
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5!=3 && a[i]%5==2)
                {
                    judge = 3;
                }
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5!=3 && a[i]%5!=2 && a[i]%5==1)
                {
                    judge = 4;
                }
                if(compare>judge)
                {
                    compare = judge;
                }
            }printf("%d\n",compare);
        }
        if(k==4)
        {
            for(i=0;i<n;i++)
            {
                if(n==1)
                {
                    if(a[i]%4==0)
                    {
                        judge = 0;
                    }
                    if(a[i]%4==1)
                    {
                        judge = 3;
                    }
                    if(a[i]%4==2)
                    {
                        judge = 2;
                    }
                    if(a[i]%4==3)
                    {
                        judge = 1;
                    }
                     if(compare>judge)
                    {
                        compare = judge;
                    }
                }
                if(n>=2)
                {
                    if(a[i]%4==0)
                    {
                        even=even+2;
                    }
                    else if(a[i]%2==0)
                    {
                        even++;
                    }

                    if(even>=2)
                    {
                        judge = 0;
                    }
                    if(even==1)
                    {
                        judge = 1;
                    }
                    if(even==0)
                    {
                        judge = 2;
                        if(a[i]%4==3)
                        {
                            judge=1;

                        }
                    }
                    if(compare>judge)
                    {
                        compare = judge;
                    }
                }
            }printf("%d\n",compare);

        }


    }
    return 0;
}

