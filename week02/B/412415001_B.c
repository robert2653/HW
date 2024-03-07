#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,num, c;
    scanf("%d",&n);
    for(int i = 0; i < n; i ++){
        scanf("%d", &num);
        if(num == 2){
            printf("Yes\n");
        }else if(num == 1){
            printf("No\n");
        }else{
            c = 1;
            for(int j = 2; j*j <= num; j ++){
                if(num%j == 0){
                    printf("No\n");
                    c = 0;
                    break;
                }
            }
            if(c == 1)
                    printf("Yes\n");
        }

    }
    return 0;
}
