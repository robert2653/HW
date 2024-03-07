#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        if(i == 0){// first
            for(int j = 0; j<n-1; j++){
                printf(" ");
            }
            printf("*\n");
        }else if(i == n-1){// last
            for(int j = 0; j<n*2-1; j++){
                printf("*");
            }
            printf("\n");
        }else{// middle
            for(int j = 0; j<n-i-1; j++){
                printf(" ");
            }
            printf("*");
            for(int j = 0; j<(i-1)*2+1; j++){
                printf(" ");
            }
            printf("*\n");
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            printf(" ");
        }
        printf("*\n");
    }
}
