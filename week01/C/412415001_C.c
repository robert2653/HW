#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[6];
    for(int i; i < 6; i ++){
        scanf("%lf", &a[i]);
    }
    //printf("%f %f",(double)(a[0] - a[2]) / (a[1] - a[3]), (double)(a[2] - a[4]) / (a[3] - a[5]));
    if((double)(a[0] - a[2]) / (a[1] - a[3]) == (double)(a[2] - a[4]) / (a[3] - a[5]))
        printf("Yes");
    else
        printf("No");
    return 0;
}
