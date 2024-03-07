#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        int k=0, num=0;
        scanf("%d", &num);
        if(num == 1){
            printf("No\n");
        }else{
            for(j=2;j*j<=num;j++){
                if(num%j == 0){
                    k=1;
                }
            }
            if(k==1){
                printf("No\n");
            }else{
                printf("Yes\n");
            }
        }
    }
    return 0;
}
