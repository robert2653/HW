#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i,j,z;
    for(i=0;i<n;i++){//三角形
        for(j=0;j<n-i-1;j++){ //印空白
            printf(" ");
        }

        if(i==0){ //第一列的情況
            printf("*\n");
            continue;
        }else if(i==(n-1)){ //最後一列的情況
            z=i+(i-1)+2;
            for(;z>0;z--){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");//起點*

            z=i+(i-1);
            for(;z>0;z--){
                printf(" ");
            }

            printf("*\n");//終點*
        }
    }

    for(i=0;i<n;i++){//樹幹
        for(j=0;j<n-1;j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;

}
