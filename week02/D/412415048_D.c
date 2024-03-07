#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,k,c=0;
    scanf("%d",&t);
    int b[t];
    for(k=0;k<t;k++)
    {
        int n,w,i,h=1,count=0;
        int odd=0,even=0,four=0,four1=0,two=0;
        scanf("%d%d",&n,&w);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        switch(w)
        {
            case 1:
            b[c]=0;
            c++;
            break;
            case 2:
            for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            if(even!=0)
            {
                b[c]=0;
                c++;
            }
            else
            {
                b[c]=1;
                c++;
            }
            break;
            case 4:
            for(i=0;i<n;i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
                if(a[i]%4==2)
                {
                    two++;
                }
                if(a[i]%4==0)
                {
                    four++;
                }
                else if(a[i]%4==3)
                {
                    four1++;
                }
            }
            if(even>1 || four!=0)
            {
                b[c]=0;
                c++;
            }
            else if(even==1 && odd>0)
            {
                b[c]=1;
                c++;
            }
            else if(four1!=0)
            {
                b[c]=1;
                c++;
            }
            else if(even==0 && odd>1)
            {
                b[c]=2;
                c++;
            }
            else if(two!=0)
            {
                b[c]=2;
                c++;
            }
            else
            {
                b[c]=3;
                c++;
            }
            break;
            default:
            while(h)
            {
                for(i=0;i<n;i++)
                {
                    if(a[i]%k==0)
                    {
                        h=0;
                        break;
                    }
                }
                for(i=0;i<n;i++)
                {
                    a[i]++;
                }
                count++;
            }
            b[c]=count-1;
            c++;
            break;
        }
    }
    for(k=0;k<t;k++)
    {
        printf("%d\n",b[k]);
    }
    return 0;
}
