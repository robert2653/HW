#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    k=n;


    for(int i=1;i<n;i++){

        for(int j=1;j<k;j++){
            printf(" ");
        }
        printf("*");
        k--;
        for(int j=0;j<2*i-3;j++){
            printf(" ");
            if(j==2*i-4)printf("*");
        }

        printf("\n");
    }


    //tree med
    for(int i=0;i<2*n-1;i++){
        printf("*");
    }
    printf("\n");

    //tree down
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
        printf(" ");
        }
        printf("*");
        printf("\n");
    }
}
