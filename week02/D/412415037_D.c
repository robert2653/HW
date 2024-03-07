#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=0, Min=10, min=10;
    int number=0, n=0, k=0, a=0;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        scanf("%d", &k);
        for(int j=0; j<n; j++){
            scanf(" %d", &a);
            if(a%2 == 0) number++;
            if(a%k != 0){
                min = k - a%k;
            }else{
                min = 0;
            }
            if(min < Min) Min = min;
        }
        if(k==4 && n>=2){
            if(number >= 2){
                Min = 0;
            }else{
                min = 2-number;
                if(min<Min) Min = min;
            }
        }
        printf("%d\n", Min);
        Min = 10;
        min = 10;
        number = 0;
    }


    return 0;
}
