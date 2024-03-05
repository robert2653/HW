#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,a2,b1,b2,c1,c2;
    double m1,m2,m3;
    scanf("%lf %lf %lf %lf %lf %lf",&a1,&a2,&b1,&b2,&c1,&c2);
    if(a1==c1 && a2==c2)
    {
        printf("Yes");
    }
    else if(b1==c1 && b2==c2)
    {
        printf("Yes");
    }
    else
    {
        m1=(a2-b2)/(a1-b1);
        m2=(b2-c2)/(b1-c1);
        m3=(c2-a2)/(c1-a1);

        if(m1==m2 && m2==m3 && m1==m3)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}
