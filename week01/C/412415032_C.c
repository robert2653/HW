#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a, b, c, d, e, f;
    double g = 0, h = 0;

    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);

    g = (double)(d - b) / (double)(c - a);
    h = (double)(f - b) /(double) (e - a);

    if (g == h)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
