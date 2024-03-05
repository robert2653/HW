#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //設定輸入數字和符號
    long int a, b;
    char c;
    //輸入
    scanf("%ld %ld %c", &a, &b, &c);
    //判斷運算符號並輸出
    if(c == '+')
    {

        printf("%ld", a + b);
    }
    else if(c == '-')
    {

        printf("%ld", a - b);
    }
    else if(c == '*')
    {

        printf("%ld", a * b);
    }
    else
        printf("errer");
    return 0;
}