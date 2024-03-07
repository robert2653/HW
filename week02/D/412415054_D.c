#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,k,i,j,num;

    scanf("%d",&t);
    int a[200000],b[200000],c[t];

    for(j=0;j<t;j++){
            scanf("%d %d",&n,&k);

            c[j]=100000;

            int time=0;
            int mintime=100;

            for(i=0;i<n;i++){
                scanf("%d",&num);
                a[i]=num;
            }

            int pass = 0;
            if(k==4 && n>1){

                pass=1;
                int even=0;
                int four=0;

                for(i=0;i<n;i++){
                    if(a[i]%2==0){
                        even++;
                        if(even>=2){
                            c[j]=0;
                        }
                        if(even==1){
                            c[j]=1;
                        }
                    }
                    if(even==0 && a[i]%4==1){

                        if(c[j]>1){
                            c[j]=2;
                        }
                    }
                    if(a[i]%4==0){
                        four++;
                        c[j]=0;
                    }
                    if(a[i]%4==3){
                        if(c[j]>0){
                            c[j]=1;
                        }
                    }
                }
            }
            if(pass==1){
                continue;
            }

            for(i=0;i<n;i++){
                while(a[i]%k!=0){
                    a[i]=a[i]+1;
                    time++;
                }
                b[i]=time;
                if(b[i]<mintime){
                    mintime=b[i];
                }
                time=0;
            }
            c[j]=mintime;
    }
    for(i=0;i<t;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}
