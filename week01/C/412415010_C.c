#include <stdio.h>
#include <stdlib.h>

int main()
{

    double m1,m2,m3,ax,ay,bx,by,cx,cy;
    scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
    m1=(ay-by)/(ax-bx);
    m2=(ay-cy)/(ax-cx);
    m3=(by-cy)/(bx-cx);
    if(m1==m2&&m2==m3&&m3==m1){
        printf("Yes");
    }
    else
        printf("No");

    return 0;
}
