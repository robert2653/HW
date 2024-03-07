#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[10005] = {0};
    int b[10005] = {0};
    int c[10005][200005];
    int d;
    int e;
    int flag;
    int count;
    int flog;
    int f;

    scanf("%d", &n);

    for (int x = 0; x < n; x++){
    scanf("%d%d", &a[x], &b[x]);

    for (int j = 0; j < a[x]; j++){
        scanf("%d", &c[x][j]);
    }
    }


    for (int x = 0; x < n; x++){
            flag = 6;
            flog = 6;
            if (b[x] == 4){
                    if (a[x] == 1){
                        for (int v = 1; ;v++){
                                if (c[x][0] <= 4 * v){
                                    f = 4 * v;
                                    break;
                                }}
                        flag = f - c[x][0];
                    }else{
                    count = 0;
                for (int l = 0; l < a[x]; l++){
                    if (c[x][l] % 4 == 0){
                        count = 3;
                        break;
                    }else if (c[x][l] % 4 == 3){
                        flog = 1;
                    }
                    else if (c[x][l] % 2 == 0 ){
                        count++;
                    }
                }
            if (count == 0){
                flag = 2;
            }else if(count == 1){
                flag = 1;
            }else{
                flag = 0;
            }
            }}else{
    for (int j = 0; j < a[x]; j++){
            for (int k = 1; ;k++){
                if (c[x][j] <= b[x] * k){
                    e = b[x] * k;
                    break;
                }
            }
        if (c[x][j] != 1){
       d = e - c[x][j];
    }else{
        d = b[x] - 1;
    }
       if (d < flag){
        flag = d;

       }
    }
            }

    if (flog < flag){
        printf("%d\n", flog);
    }else{
    printf("%d\n", flag);
    }
    }




    return 0;
}
