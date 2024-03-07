#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, x;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%d", &x);

        int result = 1;

        if(x == 1){
            result = 0;
        }else{
            for(int j = 2; j <= sqrt(x); j++){
                if(x % j == 0){
                    result = 0;
                    break;
                }
            }
        }

        if(result){
            printf("Yes\n");
        }else{
            printf("No\n");
        }


    }
    return 0;
}