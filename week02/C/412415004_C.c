#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=n-1-i;j>0;j--){
            printf(" ");
        }printf("*");
        for(int k=0;k<2*i-1;k++){
            printf(" ");
        }if( i!=0 ){
            printf("*");
            printf("\n");
        }else{printf("\n");}
    }

    for(int i=0;i<2*n-1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}
/*0000*
000*0*
00*000*
0*00000*
*/
