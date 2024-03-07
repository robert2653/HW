#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        if(i == n - 1){
            for(int j = 0; j < 2 * n - 1; j++){
                printf("*");
            }
        }else{
            for(int j = 0; j < 2 * n - 1; j++){
                if(j <= n - 1 + i){
                    if(j == n - 1 - i || j == n - 1 + i){
                        printf("*");
                    }else{
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}
