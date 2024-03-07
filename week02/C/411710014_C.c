#include<stdio.h>
#include<stdlib.h>

int main(){


int i,n=0;


scanf("%d",&n);



for (i = 0; i < n-1; i++) {
        // 打印空格
        for (int j = 1; j < n - i; j++) {
            printf(" ");}
          printf("*");
       

        for (int j = 1; j < 2 * i; j++) {
            printf(" ");
        }
        if (i != 0) {
            printf("*");
        }


printf("\n");
    }

//聖誕樹的底部
for (int i=0;i<(n*2-1);i++){
    printf("*");
}
printf("\n");
for(int i=0;i<(n);i++){
    for (int i=0;i<(n-1);i++){
   printf(" ");
}
printf("*");
printf("\n");}



    return 0;
}