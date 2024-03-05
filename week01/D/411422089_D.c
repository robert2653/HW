#include <stdio.h>

    int main(){
        long long ax, ay, bx, by, cx, cy, d1x, d1y, d2x, d2y, ip ;//d1x是AC的X分量,ip是內積
        scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
        d1x=(ax-cx);
        d1y=(ay-cy);
        d2x=(ax-bx);
        d2y=(ay-by);
        ip=(d1x*d2y)-(d1y*d2x);
          if (ip==0){
            printf("Touch");
        }else if (ip<0){
            printf("Left");
        }else{
            printf("Right");
        }



        return 0;
    }



