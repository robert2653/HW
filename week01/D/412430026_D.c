#include <stdio.h>
#include <stdlib.h>

int main() {
    long long int ax, ay, bx, by, cx, cy, cross;
    scanf("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);

    cross = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
    if(cross > 0){
        printf("Left");
    }else if(cross < 0){
        printf("Right");
    }else{
        printf("Touch");
    }
}
