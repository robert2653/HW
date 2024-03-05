#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
        double line1,line2,li1,li2,result;
        line1=b1-a1;
        line2=b2-a2;
        li1=c1-a1;
        li2=c2-a2;
        result=(line1*li2)-(li1*line2);
        if(result>0)
        {
            printf("Left");
        }
        else if(result==0)
        {
            printf("Touch");
        }
        else
        {
            printf("Right");
        }

    return 0;
}
