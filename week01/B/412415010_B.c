#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,b,c;
    char w,s;

    scanf("%ld",&a);
    scanf("%ld",&b);
    scanf("%c %c",&s,&w);

    if(w==42){
        c=a*b;
    }
    if(w==43){
        c=a+b;
    }
    if(w==45){
        c=a-b;
    }

    printf("%ld",c);
    return 0;
}
