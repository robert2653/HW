#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b^=a[i];
    }
    printf("%d",b);
    return 0;
}

