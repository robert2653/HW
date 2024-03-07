#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t,judge = 0;
    scanf("%d\n",&t);
    int a[t];
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
        judge=0;
        if(a[i]==1){printf("NO\n");}
        if(a[i]==2 || a[i]==3){printf("YES\n");}
        for(int j=2;j<=sqrt(a[i]);j++){
            if(a[i]%j==0){
                printf("NO\n");
                judge = 1;
                break;
            }

        }
        if(judge == 0 && a[i]!=2 && a[i]!=1 && a[i]!=3){
                printf("YES\n");

            }

    }
    return 0;
}
