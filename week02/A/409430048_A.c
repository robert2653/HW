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

/*���]��J�O 5 4 3 4 3 �A�ন�G�i��s��XOR:
101 ^ 100 = 001
      011 ^ 001 = 010
      100 ^ 010 = 110
      011 ^ 110 = 101
���ƥX�{���Ʀ����|�Q�����A����ۤv��ۤv��XOR����000*/
    for(int i = 0; i < n; i++) 
    {                               
        odd ^= num[i];
    }

    printf("%d", odd);

    return 0;
}



