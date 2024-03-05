
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,e,f,n=pow(2,31),m=-(pow(2,31));
    float q,w,s;
    scanf("%lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f);
    q=(b-d)/(float)(a-c);
    w=(f-d)/(float)(e-c);
    s=(f-b)/(float)(e-a);
    if(a>=m&&a<=(n-1)&&b>=m&&b<=(n-1)&&c>=m&&c<=(n-1)&&d>=m&&d<=(n-1)&&e>=m&&e<=(n-1)&&f>=m&&f<=(n-1)&&a!=c&&b!=d){
        if(q==w&&q==s&&w==s){
            printf("Yes");
        }
        else {printf("No");
    }



    return 0;

}
}
