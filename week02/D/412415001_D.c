#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, k, max, num;
    scanf("%d", &n1);
    for(int i = 0; i < n1; i ++){
        scanf("%d%d", &n2, &k);
        if(k == 4){
            int u[4] = {0};
            for(int j = 0; j < n2; j ++){
                scanf("%d", &num);
                u[num % 4] ++;
            }
            if(u[0] > 0 || u[2] > 1){
                printf("0\n");
            }else if((n2 != 1 && u[2] == 1) || u[3] > 0){
                printf("1\n");
            }else if(u[1] > 1 || (u[2] == 1 && n2 == 1)){
                printf("2\n");
            }else{
                printf("3\n");
            }
        }else{
            max = -1;
            for(int j = 0; j < n2; j ++){
                scanf("%d", &num);
                if(num%k > max)
                    max = num%k;
                if(num%k == 0){
                    max = k;
                }
            }
            printf("%d\n", k-max);
        }
    }
}