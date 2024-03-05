#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int ax, ay, bx, by, cx, cy;
    scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);

    double c = (double)(bx-ax)*(cy-ay)-(double)(by-ay)*(cx-ax);



    if(c == 0){
        printf("Touch");
    }
    else if(c > 0){
        printf("Left");
    }
    else{
        printf("Right");
    }
    return 0;
}
