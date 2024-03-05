#include <stdio.h>

int main()
{
    long long int x1, y1, x2, y2, x3, y3;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);

    if(x1==x2||x1==x3||x2==x3)  // 使用==來比較相等
        printf("No");
    else{
        double slope1 = (double)(y2 - y1) / (x2 - x1);
        double slope2 = (double)(y3 - y2) / (x3 - x2);
        double slope3 = (double)(y3 - y1) / (x3 - x1);

        if(slope1==slope2&&slope2==slope3&&slope1==slope3)
            printf("Yes");
        else
            printf("No");
    }

    return 0;
}
