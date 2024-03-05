#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
long long  a , b ;
char c ;
scanf ("%lld %lld %c",&a ,&b ,&c ) ;
if ( c == '+') {
    printf ( " %lld " , a + b ) ;
}
else if ( c == '-') {
    printf ( " %lld " , a - b ) ;
}
else if ( c == '*') {
    printf ( " %lld " , a * b ) ;
}
}