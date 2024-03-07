#include <stdio.h>
#include <stdbool.h>
#include <math.h>

_Bool isPrime(long long x);
int main(void)
{
    int n = 0;
    long long tmp = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%lld", &tmp);
        if(isPrime(tmp)){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}

_Bool isPrime(long long x){
    if(x == 1){
        return false;
    }else if(x == 2){
        return true;
    }

    for(int i = 2; i<=sqrt(x); i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
