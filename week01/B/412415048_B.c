#include <stdio.h>
#include <stdlib.h>

int main()
{
    //�ŧi�ܼ�

    long long int q, w, e ;
    char r;

    //��J

    scanf("%lld %lld %c",& q ,& w ,& r);

    //�p��

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

    //��X

    printf("%lld",e);
    return 0;
}
