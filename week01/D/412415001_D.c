#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[6];
    double a1,a2,a3,a4;
    for(int i; i < 6; i ++){
        scanf("%lf", &a[i]);
    }
   /* if(a[0] == a[2]){
        if(a[4] == a[0])
            printf("Touch");
        if(a[4] < a[0])
            printf("Left");
        if(a[4] > a[0])
            printf("Right");
        return 0;
    }
    m = (a[1] - a[3])/(a[0] - a[2]);
    //c = - m * a[0] + a[1];
    //printf("%f %f", m, c);*/
    a1 = a[2] - a[0];
    a2 = a[3] - a[1];
    a3 = a[4] - a[0];
    a4 = a[5] - a[1];
    if(a1 * a4 - a2 * a3 == 0){
        printf("Touch");
    }
    if(a1 * a4 - a2 * a3 > 0){
        printf("Left");
    }
    if(a1 * a4 - a2 * a3 < 0){
        printf("Right");
    }
    return 0;
}
