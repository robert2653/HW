#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
long long x1, y1, x2, y2, x3, y3;
scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);
if((fabs((double)(y2 - y1) / (x2 - x1)) == fabs((double)(y3 - y2) / (x3 - x2))) && (fabs((double)(y3 - y2) / (x3 - x2)) == fabs((double)(y1 - y3) / (x1 - x3)))){
    printf("Yes");
}
else{
    printf("No");
}
return 0;
}
