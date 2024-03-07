#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int num;
    int j=0;
    for (int i=0; i<n; i++){
        scanf("%d",&num);
        j=j^num;
    }
    printf("%d\n",j);
}
