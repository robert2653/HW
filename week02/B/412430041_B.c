#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int x[t], p;
    for(int i=0; i<t; i++){
        scanf("%d", &x[i]);
    }
    for(int i=0; i<t; i++){
        if(x[i]>=2){
        p=0;
        for(int j=2; j<=sqrt(x[i]); j++){
            if(x[i]%j == 0){
                p=1;
            }
        }
        if(p==1){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
        }
        else{
            printf("No\n");
        }
    }
}
