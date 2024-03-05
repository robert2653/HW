#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a1, a2, b1 ,b2, c1,c2 ,k1,k2,j1,j2,s=0;

    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2 , &b1, &b2, &c1, &c2);
    k1=b1-a1;
    k2=b2-a2;
    j1=c1-a1;
    j2=c2-a2;
    s=k1*j2-k2*j1;

    if(s==0)printf("Touch");

    else if(s>0) printf("left");
    else if(s<0) printf("right");

}


/*

s= a1*b2 + b1*c2 + c1*a2 -( a1*c2 + c1*b2 + b1*a2);


    double m=0,d=0;
        if (a1!=b1 && a1!=c1 && (b2-a2)/(b1-a1)==(c2-a2)/(c1-a1)){
        printf("Yes");
    }
    else if(a1==b1 && a1==c1){
        printf("Yes");
    }
    else printf("No");

    else printf("No");
    if (a1!=b1){
        m=(b2-a2)/(b1-a1);
        d=a2-m*a1;
    }
    if(a1==b1 && a1==c1){
        printf("Yes");
    }
    else if(c2==c1*m+d){
        printf("Yes");
    }
    else printf("No");
*/
