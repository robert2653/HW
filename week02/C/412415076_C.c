#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int i,j;
    for(i=1;i<=n-1;i++){
        for(j=1;j<=(2*n-1);j++){
            if((j+i)==(n+1)&&i!=1){
                printf("*");
            }
            else if((j-i)==(n-1)){
                printf("*");
                break;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");

     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
