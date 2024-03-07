#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, num, i=0, j, b=0, c;
    char y;

    scanf("%d", &a);


    int aa[]={0}, bb[]={0};
    for (i = 0; i < a; i++) {
        scanf("%d", &c);
        b = b ^ c;
    }


    printf("%d", b);
}
    

    
