#include <stdio.h>
#include <stdlib.h>


int A(int );

int main()
{
    int n;
    int m[20005];

    scanf("%d", &n);
    for (int j = 0; j < n; j++){
        scanf("%d", &m[j]);
    }

    for (int j = 0; j < n; j++){
        if(A(m[j]) == 1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}

int A(int n)
{
    if(n==1)
        return 0;
    int i=2;
    for(; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
