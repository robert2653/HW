#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i --){
        for(int j = i; j > 1; j--){
            printf(" ");
        }
        if(i == n){
            printf("*\n");
        }else if(i == 1){
            for(int k = n*2-1; k >= 1; k --){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(int k = (n-i)*2-1; k >= 1; k --){
                printf(" ");
            }
            printf("*\n");
        }
    }
    for(int i = n; i > 0; i --){
        for(int j = n; j > 1; j --){
            printf(" ");
        }
       // if(i == 1)
       //     printf("*");
       // else
            printf("*\n");
    }
    return 0;
}
