#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a , b ,ans;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);//輸入兩數與運算符號
    if(c == '+')
        {
        ans = a + b;//相加
        }
    else if(c == '-')
        {
        ans = a - b;//相減

        }
    else if(c == '*')
        {
        ans = a * b;//相乘

        }
    printf("%ld",ans);//輸出答案
    return 0;
}
