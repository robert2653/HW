#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,test=0;
    scanf("%d", &n);
    int num;
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        int s = pow(num, 0.5);
        if(num == 2){
            printf("YES\n");
            continue;
        }
        if(num%2 == 0 || num == 1){
            printf("NO\n");
            continue;
        }
        for(int j=3; j<=s; j+=2){
            if(num%j == 0){
                test = 1;
            }
        }
        if(test == 1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
        test = 0;
    }
    return 0;
}
