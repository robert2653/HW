#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result=a[0];
    for(i=1;i<n;i++){
        result=result^a[i];
    }

    printf("%d",result);

    return 0;
}
