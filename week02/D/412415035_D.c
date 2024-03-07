#include <stdio.h>
#include <stdlib.h>

int min_operations(int arr[], int n, int k)
{

    int a[2000];
    for (int i = 0; i < n; i++)
    {
        a[i]=arr[i]%k;
        if(a[i]==0)
        {
            return 0;
            break;
        }
    }
    if(k!=4)
    {
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
        }
        return k-max;
    }
    else
    {
        int max2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max2)
                max2=a[i];
        }

        int num2=0,num1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
                num2++;
            if(arr[i]%2==1)
                num1++;
        }
        if(num2>=2)
            return 0;
        if(num2==1 && num1>=1 )
            return 1;
        if(num2==0 && num1>=2 && max2!=3)
            return 2;
        if(num2==0 && num1>=2 && max2==3)
            return 1;
        if(num2==1 && num1==0)
            return 4-max2;
        if(num2==0 && num1==1)
            return 4-max2;

    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t>0)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int result = min_operations(arr, n, k);
        printf("%d\n", result);
        t--;
    }

    return 0;
}
