#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, a, b, n;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        if(i != n-1){
            for(j=0;j<2*n-1;j++){
                if(j==n-i-1 || j==n+i-1){
                    printf("*");
                }else if(j!=n-i-1 && j<n+i-1){
                    printf(" ");
                }
            }
        }else{
            for(j=0;j<2*n-1;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    for(a=0;a<n;a++){
        for(b=1;b<n;b++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
