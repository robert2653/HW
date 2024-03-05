

#include<stdio.h>
#include<math.h>

int main() {
  long long int a,b,x=2,y;
    char op;
    scanf("%lld %lld %c",&a,&b,&op);

    for(int i=1;i<=30;i++){
x = x*2 ;
}
y= -x;
    if (a<=(x-1)&&a>=y&&b<=(x-1)&&b>=y) {
        if (op=='+') {
            printf("%lld", a+b);
            }
            else if (op=='-') {
            printf("%lld", a-b);
            }
            else if (op=='*') {
        printf("%lld", a*b);
            }
            else {
        printf("wrong op");
        }
            }
            else {
            printf("wrong");
            }

        return 0;
        }

