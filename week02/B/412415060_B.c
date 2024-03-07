#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    int i,j,x;

    for(int j=0;j<n;j++){
        scanf("%d",&x);
        int prime = 1;

        if(x<2){
            prime = 0;
        }
        else{
            for(i=2;i<=sqrt(x);i++){
                if(x%i==0){
                    prime = 0;
                    break;
                }
            }
        }
        a[j] = prime;
    }

    for(j=0;j<n;j++){
        if(a[j]==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }    
    
    return 0;
}