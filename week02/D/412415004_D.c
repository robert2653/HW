#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int k,n;
        scanf("%d %d",&n,&k);
        int b[n],c[n];
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
            c[j]=b[j]%k;
        }if(k!=4){
            int m=0;
            for(int i=0;i<n;i++){
                if(c[i]>m){
                    m=c[i];
                }
                if(c[i]==0){
                    printf("0\n");
                    break;
                }else{
                    if(i==n-1){
                        printf("%d\n",k-m);
                    }
                }
            }

        }else{
            int e[4]={0};
            for(int i=0;i<n;i++){
                ;
                switch(b[i]%4){
                    case 0:
                        e[0]++;
                        break;
                    case 1:
                        e[1]++;
                        break;
                    case 2:
                        e[2]++;
                        break;
                    default:
                        e[3]++;
                        break;
                }
            }
            if(e[0]>0 || e[2]>1){
                printf("0\n");
            }else if(e[3]>0 || (e[2]>0 && e[1]>0)){
                printf("1\n");
            }else if(e[2]>0 || e[1]>1){
                printf("2\n");
            }else{
                printf("3\n");
            }
        }
    }

    return 0;
}
