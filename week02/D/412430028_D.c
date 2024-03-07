#include <stdio.h>

int main()
{
    long int t, n;
    int k, e;
    scanf("%ld", &t);
    long long int q[t];
    for(int j = 0; j < t; j++)
    {
        q[j] = 0;
        scanf("%ld %d", &n, &k);
        long long int a[n];
        e = 0;
        int l = 0;
        long long int minr = k;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        for(int i = 0; i< n;i++)
        {
            if(a[i] % k == 0)
            {
                q[j] = 0;
                l = 1;
                break;
            }else
            {
                if(minr > k - (a[i] % k))
                    minr = k - (a[i] % k);
                q[j] = minr;
            }

        }
        if(k == 4 && n > 1 && l == 0)
            {
                for(int i = 0; i <n ; i++)
                {
                    if(a[i] % 2 == 0)
                        e++;
                }
                if(e == 0)
                {
                    for(int i = 0;i < n;i++)
                    {
                        if(a[i] % 4 == 3)
                        {
                            q[j] = 1;
                            break;
                        }

                        else
                            q[j] = 2;
                    }
                }else if(e == 1)
                {
                    q[j] = 1;
                }else if(e >= 2)
                {
                    q[j] = 0;
                }
            }

    }
    for(int i = 0;i < t;i++)
    {
        printf("%lld\n", q[i]);
    }
    return 0;
}
