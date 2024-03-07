#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,x=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        x ^= num;
    }
    if(x!=0){
        printf("%d", x);
    }else{
        printf("0\n");
    }
    return 0;
}
