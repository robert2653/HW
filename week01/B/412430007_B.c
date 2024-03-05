#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
 long long x,y;
 char op;
 long long result;
scanf("%lld %lld %c", &x, &y, &op);
if(op == '+'){
    result = x + y;
}
else if(op == '-'){
    result = x - y;
}
else if(op == '*'){
    result = x * y;
}else{
return 1;
}
printf("%lld",result);
return 0;
}
