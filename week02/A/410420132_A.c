#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[200005] = {0};
    int n;
    int m;
    int z = 0;

    scanf("%d", &n);

    for (int j = 1; j <= n; j++){
        scanf("%d", &A[j]);
    }




            
        for (int k = 2; k <= n; k++){
            A[1] ^= A[k];
            //printf("%d", m);
        }


   printf("%d", A[1]);
    return 0;
}
