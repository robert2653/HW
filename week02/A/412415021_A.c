#include <stdio.h>
#include <stdlib.h>

int main()
{
    long time, temp1 = 0, temp2 = 0;
    scanf("%ld", &time);
    for(int i = 0; i < time; i++){
        scanf("%ld", &temp1);
        temp2 = temp1 ^ temp2;

    }
    printf("%ld", temp2);
    return 0;
}
