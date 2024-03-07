#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, i = 0, j, b;
    
    scanf("%d", &a);
    for(i=0;i<a;i++){
        if(i==0){
            for(j=0;j<a-1;j++){
                printf(" ");
            }
            printf("*\n");
            continue;
        }
        if(i==a-1){
            for(j=0;j<(a*2)-1;j++){
                printf("*");
            }
            continue;
        }
        for(j=0;j<a-i-1;j++){
                printf(" ");
        }
        printf("*");
        for(j=0;j<((i-1)*2)+1;j++){
                printf(" ");
        }
        printf("*\n");
    }
    for(i=0;i<a;i++){
        printf("\n");
        for(j=0;j<a-1;j++){
                printf(" ");
            }
        printf("*");
    }
    printf("\n");
}