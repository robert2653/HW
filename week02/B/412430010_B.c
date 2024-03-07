#include <stdio.h>
#include <math.h>
int main(){
    int num = 0;
    int n;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
            int flag = 1;
        scanf("%d",&num);
        if (num == 1){
            printf("No\n");
            continue;
        }
        if (num == 2 || num == 3 || num == 5 || num == 7){
            printf("Yes\n");
            continue;
        }
        if (num % 2 == 0 || num % 3 == 0){
            printf("No\n");
            continue;
        }
        for(int i = 1 ; sqrt(num) >= (6*i-1);i++){
            if( (num % (6*i-1) == 0) || (num % (6*i+1) == 0) ){
            printf("No\n");
            flag = 0;
            break;
            }
        }
        if(flag){
            printf("Yes\n");
        }

    }
    return 0;
}

