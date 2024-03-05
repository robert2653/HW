#include<stdio.h>
#include <stdlib.h>

int main(){
    long long a1 , a2 , b1 , b2 , c1 , c2 ;
    scanf("%lld %lld %lld %lld %lld %lld",&a1,&a2,&b1,&b2,&c1,&c2);
    double m1=((double)(a2-b2)/(double)(a1-b1));//斜率
    double m2=((double)(a2-c2)/(double)(a1-c1));
    //兩個同點
    if( ((a1==b1)&&(a2==b2)) || (c1==b1)&&(c2==b2) || (a1==c1)&&(a2==c2) ){
        printf("Yes");
    }
    //三點共垂直線
    else if((a1==b1)&&(a1==c1)){
        printf("Yes");
    }
    //兩點共垂直線
    else if((a1==b1)&&(c1!=a1)){
        printf("No");
    }else if((a1==c1)&&(b1!=a1)){
        printf("No");
    }else if((b1==c1)&&(a1!=b1)){
        printf("No");
    }
    //三點共水平線
    else if((a2==b2)&&(a2==c2)){
        printf("Yes");
    }
    //兩點共水平線
    else if((a2==b2)&&(c2!=a2)){
        printf("No");
    }else if((a2==c2)&&(b2!=a2)){
        printf("No");
    }else if((b2==c2)&&(a2!=b2)){
        printf("No");
    }else if( m1 == m2 ){
        printf("Yes");
        //printf("\n%.2f %.2f",m1,m2);
    }else{
        printf("No");
        //printf("\n%f %f",m1,m2);
    }
    return 0;
}
