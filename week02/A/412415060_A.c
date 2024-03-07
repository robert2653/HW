#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    scanf("%d",&num);

    int a[num];
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }

    int result;
    result = a[0];
    for(int j=1;j<num;j++){
        result = result^a[j];
    }
    
    printf("%d",result);
    return 0;
}