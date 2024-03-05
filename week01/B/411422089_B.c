#include <stdio.h>

    int main(){
        long long a, b;//Á×§K·¸¦ì
        char c;
        scanf("%ld %ld %c", &a, &b, &c);
        if(c=='+'){
            printf("%ld", a+b);
        }else if (c=='-'){
            printf("%ld", a-b);
        }else{
            printf("%ld", a*b);
        }
        return 0;

    }
