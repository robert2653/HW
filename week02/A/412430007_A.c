#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long XOR = 0;
    long long num[n];
   long long odd = 0;

    for(long long i = 0; i < n ; i++) {
        scanf("%lld", &num[i]);
        XOR = XOR ^ num[i];

    }

   for (long long i = 0; i < n; i++) {
        if (XOR != 0) {
            odd = num[i];
            break;
        }
    }

    if (XOR != 0) {
        printf("%lld", XOR);
    } else {
        printf("0");
    }

    return 0;
}
