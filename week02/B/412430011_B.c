#include <stdio.h>
#include <stdlib.h>


int main()
{
    int t;

    printf("");
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++){
        printf("");
        scanf("%d",&a[i]);

    }
    for(int i=0;i<t;i++){
        int isPrint=1;
        for(int j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                isPrint=0;
                break;
            }
        }
        if((isPrint==1)&&(a[i]!=1)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }}
return 0;
}
