#include<stdio.h>
#include<stdlib.h>
int main(){
long long int a, b, ans;
char x;
scanf("%lld %lld %c",&a, &b, &x);
switch(x){
case'+':
    ans = a + b;
    printf("%lld",ans);
    break;

case'-':
    ans = a - b;
    printf("%lld",ans);
    break;

case'*':
    ans = a * b;
    printf("%lld",ans);
    break;
}

}

