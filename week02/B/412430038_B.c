#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int prime(long long int x){

    if(x == 1){
        return 0;
    }
    for (long long int u = 2; u <= sqrt(x); u++){
        if(x%u == 0){
            return 0;//有因數，不是質數
            break;
        }
    continue;
    }
    return 1;

}

int main() {
    long long int t;
    scanf("%lld",&t);

    for (long long int i = 0; i < t; i++) {
        long long int x;
        scanf("%lld", &x);

        if(prime(x)==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }

    return 0;
}