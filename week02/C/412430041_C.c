#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    //���I
    for(int i=1; i<=(2*n-1)/2; i++){
        printf(" ");
    }
    printf("*\n");

    //����
    int a=0;
    for(int t=1; t<=n-2; t++){
        for(int i=1; i<(2*n-1)/2-a; i++){
            printf(" ");
        }
        printf("*");
        a++;
        for(int j=1; j<=2*t-1; j++){
            printf(" ");
        }
        printf("*\n");
    }

    //����
    for(int i=1; i<2*n-1; i++){
        printf("*");
    }
    printf("*\n");

    //��F
    for(int t=1; t<=n; t++){
        for(int i=1; i<=(2*n-1)/2; i++){
        printf(" ");
        }
        printf("*\n");
    }
}
