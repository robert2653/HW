#include <stdio.h>
#include <stdlib.h>

int main()
{
    //宣告變數

    long long int q, w, e ;
    char r;

    //輸入

    scanf("%lld %lld %c",& q ,& w ,& r);

    //計算

    switch(r)
    {

    case '+':
        e=q+w;
        break;

    case '-':
        e=q-w;
        break;

    default :
        e=q*w;
        break;

    }

    //輸出

    printf("%lld",e);
    return 0;
}
