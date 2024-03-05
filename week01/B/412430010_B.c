#include <stdio.h>

int main(){
    int num_a , num_b;
    char typex;
    scanf("%d %d %c",&num_a, &num_b, &typex);
    switch(typex){
        case '+':
            printf("%d\n",num_a + num_b);
            break;
        case '-':
            printf("%d\n",num_a - num_b);
            break;
        case '*':
            printf("%lld\n",(long long int)num_a * num_b); //¨¾·¸¥X
            break;
        default : break;
    }
    return 0;
}

