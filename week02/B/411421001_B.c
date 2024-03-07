
#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int x;
    int judge=1;
    for(int i=0; i<t; i++){
        scanf("%d",&x);
        if(x==1){
            printf("No\n");
        }
        //if(x==2 || x==3){
          //  printf("Yes\n");
        //}
        
        for(int j=2; j<x; j++){
            if(x%j==0){
                printf("No\n");
                judge=0;
                break;
            }
        }
        if(judge==1){
            printf("Yes\n");
        }
    }
}

