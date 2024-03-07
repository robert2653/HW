#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++) printf(" ");
        printf("*");
        if(i==1){
            printf("\n");
            continue;
        }else{
            int temp = i-1;
            for(int k=0; k<2*temp-1; k++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for(int i=0; i<2*n-1; i++) printf("*");
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++) printf(" ");
        printf("*\n");
    }

    return 0;
}
