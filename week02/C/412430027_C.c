#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    int x = num - 1, y = 0;

    for(int i = 0; i < num; i++) {

        for(int j = 0; j < num * 2 - 1; j++) {

            if(i == num - 1) {
                printf("*");
            }
            else if((i == y && j == x - y) || (i == y && j == x + y)) {
                printf("*");
            }
            else if(j < x + y) {
                printf(" ");
            }
        }
        printf("\n");


        y++;
    }

    for(int i = 0; i < num; i++) {


        for(int j = 0; j < num - 1; j++) {

            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
