#include <stdio.h>
#include <stdlib.h>
int num_identify(int n){
 if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t,x ;
    scanf("%d",&t);
    for(int j = 0;j < t;j++){
        scanf("%d",&x);
        if(num_identify(x)){
           printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
