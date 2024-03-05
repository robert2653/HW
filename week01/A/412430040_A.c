#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);
    if((a >= -pow(10,9)) && (b >= -pow(10,9)) && (a <= pow(10,9)) && (b <= pow(10,9))){
        printf("%d",a+b);
    }

    return 0;
}
