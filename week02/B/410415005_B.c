#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int numbers[t];
    for (int i = 0; i < t; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < t; i++) {
        if (numbers[i] <= 1) {
            numbers[i] = 0;
        } else {
            int is_prime = 1;
            for (int j = 2; j * j <= numbers[i]; j++) {
                if (numbers[i] % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
            numbers[i] = is_prime;
        }
    }

    for(int k = 0; k < t; k++) {
        if(numbers[k] == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
