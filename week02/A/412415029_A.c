#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    int result=0;
    for (int i=0; i<n; i++)
    {
        int num;
        scanf("%d",&num);
        result ^= num;
    }
    printf("%d\n", result);
    return 0;
}
