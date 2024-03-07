#include <stdio.h>
#include <math.h>
int main(){
    int n = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        if(i == 1){
                for(int l = 0 ; l< (n-1) ; l++){
                    printf(" ");
                }
            printf("*\n");
        }
        else if( i != n){
            for(int l = i; l < n ; l++){
                printf(" ");
            }
            printf("*");
            for(int l = 1; l < (2*i-2) ; l++){
                printf(" ");
            }
            printf("*\n");
        }
        else if( i == n){
            for(int l = 0;l<(2*n-1);l++){
                printf("*");
            }
        }
    }
    printf("\n");
    for(int q = 1;q <= n;q++){
        for(int i = 1; i<=n;i++){
            if(i == 1){
                for(int l = 0 ; l< (n-1) ; l++){
                    printf(" ");
                    }
                printf("*\n");
                }
            }
    }
    return 0;
}
