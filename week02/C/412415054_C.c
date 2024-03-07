#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=0;i<n;i++){

        if(i==0){

            for(j=0;j<n-1;j++){
                printf(" ");
            }
            printf("*");

        }
        if(i!=n-1 && i!=0){
            for(j=0;j<n-i-1;j++){
                printf(" ");
            }
            printf("*");
            for(j=0;j<2*i-1;j++){
                printf(" ");
            }
            printf("*");
        }
        if(i==n-1){
            for(j=0;j<2*n-1;j++){
                printf("*");
            }
        }
        printf("\n");
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                printf(" ");
            }
            printf("*\n");
        }
    return 0;
}
