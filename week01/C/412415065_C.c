#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int ax, ay, bx, by, cx, cy;
    double A;
    scanf("%ld%ld%ld%ld%ld%ld", &ax, &ay, &bx, &by, &cx, &cy);
    A=(by-ay)*(cx-ax)-(bx-ax)*(cy-ay);
    if(A==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
