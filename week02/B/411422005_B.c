#include <stdio.h>
#include <stdlib.h>

int A(int );

int main()
{
int b;
int a[300000];

scanf("%d", &b);
    for (int j = 0; j < b; j++){
        scanf("%d", &a[j]);
    }
    for (int j = 0; j < b; j++){
        if(cc(a[j]) == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
return 0;
}

int cc(int n)
{
    if(n==1)
    return 0;
    int i=2;
for(; i*i<=n; i++){
    if(n%i==0){
return 0;
}
}
return 1;
}
