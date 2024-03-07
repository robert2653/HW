#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int xor_result=0;
    for(int i=0;i<t;i++)
    {
        int num;
        scanf("%d",&num);

        xor_result^= num;
    }
    if(xor_result==0)
     printf("0\n");
    else
    {
        printf("%d",xor_result);
    }
    return 0;
}
