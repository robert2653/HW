#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int j = 0; j < t; j++){
        int x;
        scanf("%d", &x);

        int prime = 1;
        for(int i = 2; i <= sqrt(x); i++){
            if(x % i == 0){
                prime = 0;
                break;
            }
        }

        if(prime == 1 && x > 1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }

    return 0;
}
