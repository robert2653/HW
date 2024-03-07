#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t,x,i,j;
    int prime;
    scanf("%d",&t);
    int a[t];
    for(j=0;j<t;j++){
        scanf("%d",&x);
        prime=1;

        if(x<2){
            prime=0;
        }
        else{
        for(i=2;i<=sqrt(x);i++){//檢查到sqrt就好
            if(x%i==0){
                prime=0;
                break;
            }
        }
    }
    a[j]=prime;
    }
    for(j=0;j<t;j++){
        if(a[j]==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}
