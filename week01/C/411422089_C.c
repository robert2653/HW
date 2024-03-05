#include <stdio.h>

    int main(){
        long long ax, ay, bx, by, cx, cy;
        float m1, m2;
        scanf("%ld %ld %ld %ld %ld %ld", &ax, &ay, &bx, &by, &cx, &cy);
        m1=(float)(ax-bx)/(ay-by);
        m2=(float)(ax-cx)/(ay-cy);
        if(m1==m2){
            printf("Yes");
        }else{
            printf("No");
        }
        return 0;

    }
