#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a1, a2, a3, b1, b2, b3;
    scanf("%lld %lld %lld %lld %lld %lld", &a1, &b1, &a2, &b2, &a3, &b3);
    long long d1, d2, e1, e2;
    d1 = a1 - a2;
    d2 = a1 - a3;
    e1 = b1 - b2;
    e2 = b1 - b3;
    long long ans = -(d1 * e2 - d2 *e1);
    if(ans == 0){
        printf("Touch");
    }
    else if(ans < 0){
        printf("Left");
    }
    else{
        printf("Right");
    }
    return 0;
}
