#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int s,a;
    printf("");
    scanf("%d",&n);
    s=n+1;
    a=n-1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if((i+j==s)||(j-i==a)){
               printf("*");

               }
            else{
                if(j-i>a){
                    break;
                }
                printf(" ");
            }

            }
        printf("\n");
        }
    for(int i=0;i<2*n-1;i++){
        printf("*");
    }
    printf("\n");



    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==n){
                printf("*");
                break;

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
