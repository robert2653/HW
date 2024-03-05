#include <stdio.h>

int main(void)
{
    long long a1, a2, b1, b2, c1, c2;
    long double m1, m2;
    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2, &b1, &b2, &c1, &c2);
    //printf("%lld %lld %lld %lld %lld %lld", a1, a2, b1, b2, c1, c2);

    m1 = ((b1-a1)*1.0)/(b2-a2);
    m2 = ((c1-a1)*1.0)/(c2-a2);
    //printf("m1 = %lf, m2 = %lf\n", m1, m2);
    if(m1 == m2){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;

}
