#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,i,j,count=0;
        long long int a[200000]={1};
        scanf("%d %d",&n,&k);
        long long int mul=1;
        for (i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            mul*=a[i];
        }
        while (mul%k!=0)
        {
            if (k==2)
            {
                a[0]++;
            }
            if (k==3)
            {
                for (i=0;i<n;i++)
                {
                    if (a[i]%k==2 || a[i]==2)
                    {
                        a[i]++;
                        break;
                    }
                    if (i==n-1)
                    {
                        a[i]++;
                    }
                }
            }
            if (k==4)
            {
                for (i=0;i<n;i++)
                {
                    if (a[i]%k==2)
                    {
                        for (j=0;j<n;j++)
                        {
                            if(a[j]%k==1)
                            {
                                a[j]++;
                                break;
                            }
                            if(a[j]%k==3)
                            {
                               a[j]++;
                               break;
                            }
                        }
                    }
                    if (a[i]%k==3)
                    {
                        a[i]++;
                        break;
                    }
                    if (a[i]%k==1&&i==n-1)
                    {
                        a[i]++;
                        break;
                    }
                }
            }
            if (k==5)
            {
                for (i=5;i<n;i++)
                {
                    if (a[i]%k==4 || a[i]==4)
                    {
                        a[i]++;
                        break;
                    }
                    if (a[i]%k!=4&&i==n-1)
                    {
                        for (j=0;j<n;j++)
                        {
                            if (a[i]%k==3 || a[i]==3)
                            {
                               a[i]++;
                               break;
                            }
                            if (a[i]%k!=3&&i==n-1)
                            {
                               for (j=0;j<n;j++)
                                {
                                      if (a[i]%k==2 || a[i]==2)
                                        {
                                            a[i]++;
                                            break;
                                        }
                                        if ((a[i]%k!=2&&i==n-1) || a[i]==1)
                                        {
                                            a[i]++;
                                            break;
                                        }
                                }
                            }
                        }
                    }
                }
            }
            for (i=0;i<n;i++)
            {
                mul=1;
                mul*=a[i];
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

