#include <stdio.h>
#include <stdlib.h>




int findThePrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}





int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int x;
        scanf("%d", &x);
        if (findThePrime(x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
