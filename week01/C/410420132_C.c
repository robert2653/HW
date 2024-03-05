#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a1, a2, b1, b2, c1, c2;
   scanf("%lf%lf%lf%lf%lf%lf", &a1, &a2, &b1, &b2, &c1, &c2);

   if ((b2 - a2) / (b1 - a1) == (c2 - b2) / (c1 - b1) && (b2 - a2) / (b1 - a1) == (c2 - a2) / (c1 - a1)){
    printf("Yes");
   }
    else{
        printf("No");
    }

    return 0;
}
