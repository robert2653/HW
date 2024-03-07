#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, odd = 0;
    scanf("%d", &n);

    int num[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

/*假設輸入是 5 4 3 4 3 ，轉成二進制連續做XOR:
101 ^ 100 = 001
      011 ^ 001 = 010
      100 ^ 010 = 110
      011 ^ 110 = 101
重複出現偶數次的會被消掉，等於自己跟自己做XOR等於000*/
    for(int i = 0; i < n; i++) 
    {                               
        odd ^= num[i];
    }

    printf("%d", odd);

    return 0;
}



