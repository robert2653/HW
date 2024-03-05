#include <stdio.h>

int main(void)
{
    long long a1, a2, b1, b2, c1, c2;
    long double tmp1, tmp2, tmp3, tmp4, tmp;
    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2, &b1, &b2, &c1, &c2);
    //printf("%lld %lld %lld %lld %lld %lld\n", a1, a2, b1, b2, c1, c2);
    tmp1 = 1.0*(a2-b2)*c1;
    tmp2 = 1.0*(b1-a1)*c2;
    tmp3 = 1.0*a1*b2;
    tmp4 = 1.0*a2*b1;
    tmp = tmp1 + tmp2 + tmp3 - tmp4;
    if(a1>b1 && a2>b2){
        tmp *= -1;
    }
    //printf("%lf", tmp);
    if(tmp < 0){
        printf("Right");
    }else if(tmp > 0){
        printf("Left");
    }else{
        printf("Touch");
    }

    return 0;
}
