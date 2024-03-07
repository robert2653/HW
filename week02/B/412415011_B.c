#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i = 0, x, test[200000]={0};
    
    scanf("%d", &t);

    for (i=0;i<t;i++){
        scanf("%d", &x);
        test[i] = 1;
        if (x <= 1) {
            test[i] = 0;
            continue;
        }
        if (x == 2) {
            test[i] = 1;
            continue;
        }
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                test[i] = 0;
                break;
            }
        }

    }


    for (i=0;i<t;i++){
        if(test[i]==1){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }

    }
    return 0;
}