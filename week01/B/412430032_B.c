#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a , b ,ans;
    char c;
    scanf("%ld %ld %c",&a,&b,&c);//��J��ƻP�B��Ÿ�
    if(c == '+')
        {
        ans = a + b;//�ۥ[
        }
    else if(c == '-')
        {
        ans = a - b;//�۴�

        }
    else if(c == '*')
        {
        ans = a * b;//�ۭ�

        }
    printf("%ld",ans);//��X����
    return 0;
}
