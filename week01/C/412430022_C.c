#include <stdio.h>

int main() {
    long long ax=0,ay=0,bx=0,by=0,cx=0,cy=0,s1=0,s2=0;
    scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
    s1=100000000*(ay-by)/(ax-bx);
    if(s1<0)
    {
        s1=s1*(-1);
    }
    s2=100000000*(cy-by)/(cx-bx);
    if(s2<0)
    {
        s2=s2*(-1);
    }
    if(s1==s2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}