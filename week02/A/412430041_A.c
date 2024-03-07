#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num[n];
    for(int i=1; i<=n; i++){
        scanf("%d", &num[i]);
    }

    int result = 0;
    for(int i=1; i<=n; i++){
        result ^= num[i];
        // ^ =>XOR, a^b^a^b^c=a^a^b^b^c
    }
    printf("%d", result);
}
