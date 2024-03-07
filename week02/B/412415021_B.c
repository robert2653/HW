#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int time;
    scanf("%d", &time);
    for(int i = 0; i < time; i++){
        long problem = 0;
        scanf("%ld", &problem);
        int test = 0;
        if(problem == 1){
            printf("No\n");
            continue;
        }
        for(int limit = 2; limit < sqrt(problem) + 1; limit++){
            if(problem == limit){
                break;
            }
            if(problem % limit == 0){
                printf("No\n");
                test = 1;
                break;
            }
        }
        if(test == 0){
            printf("Yes\n");
        }
    }
    return 0;
}
