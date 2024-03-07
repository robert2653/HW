#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d", &input);
    for(int i = 1; i < input; i++){
            printf(" ");
    }
    printf("*\n");
    for(int line = input - 2; line > 0; line--){
        for(int i = line; i > 0; i--){
            printf(" ");
        }
        printf("*");
        for(int i = 2 * (input - line - 1) - 1; i > 0; i--){
            printf(" ");
        }
        printf("*\n");
    }

    for(int i = 0; i < 2 * input - 1; i++){
        printf("*");
    }
    printf("\n");
    for(int j = 0; j < input; j++){
        for(int i = 1; i < input; i++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
