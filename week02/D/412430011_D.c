#include <stdio.h>
#include <stdlib.h>

int main()
{   int t;
    int n;
    int k;
    int s;
    int e;
    int res=1;
    int c;

    printf("");
    scanf("%d",&t);

    for(int i=0;i<t;i++){
    res=1;
    n=0;
    k=0;
    e=0;
    c=1;

    printf("");
    scanf("%d%d",&n,&k);

    int a[n];
    int b[n];
    printf("");

    if(k==4){
        for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            e+=1;
        }
        b[i]=a[i]%k;
        c*=b[i];
        res*=b[i];}
        if(res==0){
            printf("0\n");

        }
        else if(e>=2){
            printf("0\n");
        }
        else if((e==1)&&(n>1)){
            printf("1\n");
        }
        else if((c==1)&&(n>1)){
            printf("2\n");
        }

        else{
        s=b[0];
        for(int i=1;i<n;i++){
            if(b[i]>s){
            s=b[i];}
        }
        printf("%d\n",k-s);}
        }

    else if((k==1)||(k==2)||(k==3)||(k==5)){
        for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i]%k;
        res*=b[i];}
        if(res==0){
            printf("0\n");

        }
        else{
        s=b[0];
        for(int i=1;i<n;i++){
            if(b[i]>s){
            s=b[i];}
        }
        printf("%d\n",k-s);
        }
    }


    }
    return 0;
}
