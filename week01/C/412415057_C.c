#include <stdio.h>
#include <stdlib.h>

double ax,ay,bx,by,cx,cy;
double m1,m2;

int main()
{
    scanf("%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy);

    m1=(cy-by)/(cx-bx);
    m2=(cy-ay)/(cx-ax);

    if(m1==m2){
        printf("Yes");
    }
    else{
        printf("No");
    }


    return 0;
}
