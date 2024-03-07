#include <stdio.h>
int main(){
    int num = 0;
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int l = 0;l<n;l++){
        num ^= array[l];
    }
    printf("%d\n",num);
    return 0;
}

