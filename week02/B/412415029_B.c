#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        if (test(x))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
int test(int n)
{
    if (n<=1) return 0;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
