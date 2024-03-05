#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a1,a2,b1,b2,c1,c2;

    scanf("%ld %ld %ld %ld %ld %ld", &a1,&a2,&b1,&b2,&c1,&c2);

    if((a2-b2)*(c1-b1)==(c2-b2)*(a1-b1)){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
    return 0;
}
