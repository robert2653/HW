#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a_x,a_y,b_x,b_y,c_x,c_y;
    scanf("%lld %lld %lld %lld %lld %lld",&a_x,&a_y,&b_x,&b_y,&c_x,&c_y);
    double d = (b_x-a_x)*(c_y-a_y)-(b_y-a_y)*(c_x-a_x);
    if(d>0)
        printf("Left");
    else if(d<0)
        printf("Right");
    else
        printf("Touch");
    return 0;
}
