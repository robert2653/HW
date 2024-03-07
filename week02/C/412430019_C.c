#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = n-1;
    int y = 0;
for(int i = 0;i<n;i++){
    for(int j = 0;j<2*n-1;j++){
        if(i ==n-1){
        printf("*");}
        else if((i == y&&j == x-y)||(i==y&&j==x+y)){
             printf("*");
        }else if(j<x+y){
        printf(" ");
    }
}
printf("\n");
y++;
}
    for(int q = 0;q<n;q++){
    for(int w = 0; w<n-1;w++){
        printf(" ");
    }
    printf("*\n");
}
}
