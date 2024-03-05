#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int ax, ay, bx, by, cx, cy;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);

    double m1 = (double)(by-ay)/(bx-ax);
    double m2 = (double)(by-cy)/(bx-cx);
    double m3 = (double)(ay-cy)/(ax-cx);

    if(m1 == m2 && m2 == m3){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
