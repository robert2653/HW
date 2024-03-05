#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a_x,a_y,b_x,b_y,c_x,c_y;
    scanf("%lld %lld %lld %lld %lld %lld",&a_x,&a_y,&b_x,&b_y,&c_x,&c_y);
    double c =  (double)(b_y-a_y)/(b_x-a_x);
    double d =  (double)(c_y-a_y)/(c_x-a_x);
    if(c==d)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
