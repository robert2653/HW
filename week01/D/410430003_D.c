#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a1,a2,b1,b2,c1,c2;

    scanf("%ld %ld %ld %ld %ld %ld", &a1,&a2,&b1,&b2,&c1,&c2);
    if(((b1-a1)*(c2-a2)-(c1-a1)*(b2-a2))>0){
        printf("Left");
    }
    if(((b1-a1)*(c2-a2)-(c1-a1)*(b2-a2))<0){
        printf("Right");
    }
    if(((b1-a1)*(c2-a2)-(c1-a1)*(b2-a2))==0){
        printf("Touch");
    }
    return 0;
}
