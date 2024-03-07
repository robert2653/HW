#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,k,t,p,c;
    int res=1;
    printf(" ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        res=1;
        n=0;
        k=0;
        p=0;
        c=1;
        printf(" ");
        scanf("%d%d",&n,&k);
        int a[n];
        int b[n];
        printf(" ");
        if(k==4){
            for(int i=0;i<n;i++){
                scanf("%d",&a[i]);
                if(a[i]%2==0){
                    p+=1;
                }
                b[i]=a[i]%k;
                c=c*b[i];
                res=res*b[i];
            }
            if(res==0){
                printf("0\n");
            }
            else if(p>=2){
                printf("0\n");
            }
            else if((p==1)&&(n>1)){
                printf("1\n");
            }
            else if((c==1)&&(n>1)){
                printf("2\n");
            }
            else{
                t=b[0];
                for(int i=1;i<n;i++){
                    if(b[i]>t){
                        t=b[i];
                    }
                }
                    printf("%d\n",k-t);
                }
            }
            else if((k==1)||(k==2)||(k==3)||(k==5)){
                for(int i=0;i<n;i++){
                    scanf("%d",&a[i]);
                    b[i]=a[i]%k;
                    res=res*b[i];
                }
                if(res==0){
                    printf("0\n");
                }
                else{
                    t=b[0];
                    for(int i=1;i<n;i++){
                        if(b[i]>t){
                            t=b[i];
                        }
                    }
                    printf("%d\n",k-t);
                }
            }

        }
        return 0;
    }

