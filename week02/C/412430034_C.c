#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=(2*i-1);k++){
        if(k==1 || k==(2*i-1) || i==n){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
