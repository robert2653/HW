#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a1, a2, a3, b1, b2, b3;
    float m1, m2, m3;
    scanf("%ld %ld %ld %ld %ld %ld", &a1, &b1, &a2, &b2, &a3, &b3);
    m1 = 1.0 * (b1 - b2) / (a1 - a2) ;
    m2 = 1.0 * (b2 - b3) / (a2 - a3) ;
    m3 = 1.0 * (b1 - b3) / (a1 - a3) ;
    if(m1 == m2 && m1 == m3){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
