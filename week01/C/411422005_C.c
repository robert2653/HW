#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2,b;
    double slope1,slope2;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
    slope1=(a2-b2)/(a1-b1);
    slope2=(a2-c2)/(a1-c1);

    if(slope1==slope2){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
