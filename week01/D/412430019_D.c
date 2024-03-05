#include <stdio.h>
#include <stdlib.h>
int main(){
double a1, a2, a3, b1, b2, b3;
scanf("%lf %lf %lf %lf %lf %lf",&a1,&b1,&a2,&b2,&a3,&b3);
    double cross_product = (a2-a1)*(b3-b1)-(b2-b1)*(a3-a1);
if(cross_product>0){
        printf("Left");

}else if(cross_product<0){
    printf("Right");
}
else {printf("Touch");}
    return 0;
}
