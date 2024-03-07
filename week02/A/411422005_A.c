#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[300000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int cc=a[0];
    for(int i=1;i<n;i++){
            cc=a[i] ^ cc;
            }
printf("%d",cc);
}




