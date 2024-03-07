#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int m = 0; m < t; m++) {
        int N, k;
        scanf("%d %d", &N, &k);
        int a[N];
        int b[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i] % k;
        }
        int p = 1;
        for (int i = 0; i < N; i++){
            p *= b[i];
        }

        if( p==0 ){
            printf("0\n");
        }
        else if (k == 4) {
             int two = 0;
             int c = 1;
             for (int i = 0; i < N; i++) {
                c *= b[i];
                if (a[i] % 2 == 0) {
                    two+=1;
                }
            }
            if(two >= 2){
                printf("0\n");
            }else if((two == 1)&&(N>=2)){
                printf("1\n");
            }else if((c == 1)&&(N>=2)){
                printf("2\n");
            }else{
                int e = b[0];
                for(int i=1;i<N ;i++){
                if(b[i]>e){
                e = b[i];
               }
            }
            printf("%d\n", k-e);
            }
        }
        else if ((k == 1)||(k == 2)||(k == 3)||(k == 5)){
            int e = b[0];
            for(int i=1;i<N ;i++){
               if(b[i]>e){
                e = b[i];
            }
        }
            printf("%d\n", k - e);
        }
    }

    return 0;
}
