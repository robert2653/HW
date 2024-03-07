#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    int i=0,j=0;
    int n;
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int a=1;
        if(n<=1){
            a=0;
        }
        else{
             for(int j=2;j * j <= n;j++){
                 if(n%j==0){
                    a=0;break;
                 }
             }
        }
        if(a==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");

        }
    }

    return 0;
}

