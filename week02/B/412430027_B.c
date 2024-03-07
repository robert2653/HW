#include <stdio.h>
#include <stdlib.h>



int isPrime(int num){
    if(num<=1){
        return 0;
    }

    for(int i=2;i*i<=num;i++){
        if(num % i ==0){
            return 0;
        }
    }
    return 1;
}


int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int x;
         scanf("%d",&x);
         if(isPrime(x)){
            printf("Yes\n");

         }else{
            printf("No\n");
         }
    }
    return 0;
}
