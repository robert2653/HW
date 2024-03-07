#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int j=n;j>1;j--){
    for(int i=1;i<j;i++){
        printf(" ");
        }
    printf("*");
    for(int q=1;q<(n-j)*2;q++){
        printf(" ");
    }
    //printf("%d",j);
    if(n!=j){
    printf("*");
    }


    printf("\n");
}
for(int s=0;s<n*2-1;s++){
   printf("*");
}
    printf("\n");
for(int s=0;s<n;s++){
    for(int e=1;e<n;e++){
    printf(" ");
    }
    printf("*");
    printf("\n");
}

}
