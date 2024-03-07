#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int m;
   int b = 1;
   scanf("%d", &n);

   m = (2 * n - 2) / 2;

   for (int j = 0; j < m; j++){
        printf(" ");
   }
   printf("*\n");

   for (int j = m - 1; j > 0; j--){
        for(int k = 0; k < j; k++){
            printf(" ");
        }
        printf("*");
        for (int l = 0; l < b; l++){
            printf(" ");
        }
        b+=2;
        printf("*\n");

   }

   for(int j = 0; j < 2 * n - 1; j++){
        printf("*");
   }
   printf("\n");

   for(int j = 0; j < n; j++){
     for (int k = 0; k < m; k++){
        printf(" ");
   }
   printf("*\n");
   }




    return 0;
}
