#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", & num);
    int input, out = 0;
    for(int i = 0; i < num; i++)
    {
        scanf("%d",& input);
        out = out ^ input;
    }

    printf("%d", out);

    return 0;
}
