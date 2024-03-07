#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);

    if((n>=3) && (n<=(5*pow(10,2)))){

    for(int i=0 ;i<n-1 ;i++){
        for(int j = 0; j<n-i-1; j++){
            printf(" ");
        }
         printf("*");
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        if( i==n-2 ){
           for(int j=0; j<2*n-1 ;j++){
            printf("*");
           }
           printf("\n");
           }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1;j++){
            printf(" ");
        }
            printf("*\n");
      }
    }
    return 0;
}
