#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ax, ay, bx, by, cx, cy;
    scanf("%lf%lf%lf%lf%lf%lf", &ax, &ay, &bx, &by, &cx, &cy);
    if((bx - ax) == 0){
        if(cx == ax){
            printf("Yes");
        }else{
            printf("No");
        }
        return 0;
    }
    double m = (by - ay) / (bx - ax);
    double k = (cy - ay) / (cx - ax);

    if(m-k == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
