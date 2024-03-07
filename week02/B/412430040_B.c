#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, num;
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        scanf("%d",&num);
        int a = 1;

        if(num==1){
            a = 0;
        }else{
            for (int j = 2 ; j <= sqrt(num) ; j++){
                if (num % j == 0){
                    a = 0;
                    break;
                }
            }
        }

    if (a == 0){
            printf("No\n");
            }
    else{
        printf("Yes\n");
        }
    }
    return 0;
}
