#include <stdio.h>
#include <stdlib.h>

int isprime(int n) {
    if (n<=1) {
            return 0; }
    if (n<=3){ return 1;}
    if (n%2==0||n%3==0){return 0;}


    for (int i=5; i*i <= n; i+=6) {
        if (n%i==0||n % (i+2)==0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i=0;i<t;i++) {
        int x;
        scanf("%d",&x);
        if (isprime(x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
