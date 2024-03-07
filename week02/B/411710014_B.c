#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char isPrime(int num) {
    int i;

    if (num < 2) {//不是質數
        return 0;  
    }
    
    if (num == 2) {//是質數
        return 1; 
    }

    if (num % 2 == 0) {//不是質數
        return 0; 
    } else {
        for (i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                return 0;  
            }
        }
        return 1; 
    }
}

int main() {
    int t = 0, i = 0, num = 0;

    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        scanf("%d", &num);
        if (isPrime(num) == 0) {
            printf("No\n");//不是質數
        } else {
            printf("Yes\n");//是質數
        }
    }

    return 0;
}