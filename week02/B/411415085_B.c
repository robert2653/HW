#include <stdio.h>
#include <stdlib.h>


int is_prime(long long int num);

int main() {
    long long int i,t,x;
    scanf("%lld", &t);

    for (i = 0; i < t; i++) {
        scanf("%lld", &x);


        if (is_prime(x))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}


int is_prime(long long int num) {
    if (num <= 1)
        return 0;

    for (long long int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}
