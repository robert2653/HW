#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count1,count2 = 1;
    scanf("%d",&num);
    count1 = num;
    for(int a = 0;a < num-1; a++){
        printf(" ");
    }
    printf("*\n");
    for(int i = 0;i < num-2;i++){
        for(int j = 0;j < count1 - 2;j++){
            printf(" ");
        }
        printf("*");
        count1 --;
        for(int k = 0;k < count2;k++){
            printf(" ");
        }
        printf("*\n");
        count2 = count2 + 2;
    }
    for(int b = 0 ;b < 2*num-1;b++){
    printf("*");
}
    printf("\n");
    for(int c = 0;c < num;c++){
    for(int d = 0;d < num-1;d++ ){
    printf(" ");
    }
    printf("*\n");
    }
    return 0;
}

