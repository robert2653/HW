#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    scanf("%d", &n);

    int result = 0;
    int num;
    int i = 0;

    do{
        scanf("%d", &num);
        result ^= num;
        i++;
    }while(i < n);

    if(result == 0){
        printf("0\n");
    }else{
        printf("%d\n", result);
    }
    return 0;
}
