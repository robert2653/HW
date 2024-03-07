#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max=0,remainder,flag=0,flag2=0,flag3=0,sign=0;
        if(k==4)
        {
            if(n==1)
            {
                if(arr[0]%k==0)
                    printf("0\n");
                else
                printf("%d\n",k-arr[0]%k);
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(arr[i]%4==0)
                    {
                        sign=1;
                        printf("0\n");
                        break;
                    }
                    else if(arr[i]%2==0)
                    {
                        flag2++;
                    }
                    else if(arr[i]%4==3)
                    {
                        flag3++;
                    }
                    else
                    {
                        flag++;
                    }
                }
                if(sign==0)
                {
                    if(flag2>=2)
                    {
                        printf("0\n");
                    }
                    else if(flag3>0)
                    {
                        printf("1\n");
                    }
                    else if(flag2==1 && flag>0)
                    {
                        printf("1\n");
                    }
                    else
                        printf("2\n");
                }
            }
        }
        else
        {
           for(int i=0;i<n;i++)
            {
                remainder=arr[i]%k;
                if(remainder==0)
                {
                    flag=1;
                    printf("0\n");
                    break;
                }
                else
                {
                    if(remainder>max)
                        max=remainder;
                }
            }
            if(flag==0)
            printf("%d\n",k-max);
        }
    }
    return 0;
}
