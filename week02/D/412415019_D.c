#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t, n, k;
    scanf("%d", &t);
    int ans[t+10];
    for(i=1; i<=t; i++){
        scanf("%d %d", &n, &k);
        ans[i] = k;
        int m[n+10], r[n+10], d[n+10];
        for(int j=1; j<=n; j++){
            scanf("%d", &m[j]);
            r[j] = m[j]%k; //remainder
            if(r[j] != 0)
                d[j] = k-r[j]; //difference
            else
                d[j] = 0;
        }
        if(k == 4){
            if(n == 1){
                for(int j=1; j<=n; j++){
                    if(d[j] < ans[i]){
                        ans[i] = d[j];
                    }
                }
            }else{
                int even = 0;
                for(int j=1; j<=n; j++){
                    if(m[j]%4 == 0)
                        ans[i] = 0;
                    if(m[j]%4 == 3 && ans[i] > 0)
                        ans[i] = 1;
                    if(m[j]%2 == 0)
                        even++;
                }
                if(even >= 2)
                    ans[i] = 0;
                if(even == 1 && ans[i] > 0)
                    ans[i] = 1;
                if(even == 0 && ans[i] > 1)
                    ans[i] = 2;
            }
        }else{
            for(int j=1; j<=n; j++){
                if(d[j] < ans[i]){
                    ans[i] = d[j];
                }
            }
        }
        printf("%d\n", ans[i]);
    }
    return 0;
}
