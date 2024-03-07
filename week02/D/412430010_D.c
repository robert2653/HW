#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int n,k;
    int need;
    int now;
    int even;
    scanf("%d",&t);
    for(int a = 0; a<t;a++){
        scanf("%d %d",&n,&k);
        need = k;
        if(n == 1){
            scanf("%d",&now);
            if(now%k == 0){
                printf("0\n");
                continue;
            }
            printf("%d\n",(k-(now%k)));
            continue;
        }
        if(k == 4){
            even = 0;
            for(int i = 0; i<n;i++){
                scanf("%d",&now);
                if(now%4 == 0){
                    even=even+2;
                }
                if(now%4 == 2){
                    even++;
                }
                if(now % 4 == 3){
                    need = 1;
                }
            }
            if(even >= 2){
                printf("0\n");
                continue;
            }
            else if(even == 1){
                printf("1\n");
                continue;
            }
            else if(need == 1){
                printf("1\n");
                continue;
            }
            else{
                printf("2\n");
                continue;
            }
            continue;
        }
        for(int i = 0; i<n;i++){
            scanf("%d",&now);
            if(now % k == 0){
                need =0;
            }
            if((k-(now%k)) < need){
                need = (k-(now%k));
            }
        }
        printf("%d\n",need);
    }
    return 0;
}
