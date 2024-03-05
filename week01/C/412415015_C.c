#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a1, a2, b1, b2, c1, c2;
    scanf("%ld %ld %ld %ld %ld %ld", &a1, &a2, &b1, &b2, &c1, &c2);
    long cross;
    cross=(b1-a1)*(c2-a2)-(b2-a2)*(c1-a1);
    if(cross==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
