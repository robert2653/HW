#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,num,k;
    scanf("%d", &n);
    int i,j,sum;

    for(j=0;j<n;j++){
        int even = 0;
        int ans = 100;

        scanf("%d %d", &num,&k);
        int a[num];
        for(i=0;i<num;i++){
            scanf("%d",&a[i]);
        }

        if(k==1){printf("0\n");}
        if(k==2){
            sum= 0;
            for(i=0;i<num;i++){
                if(a[i]%2==0){sum=1;}
                else{sum=2;}

            if(ans>sum){
                ans = sum;
            }
        }
            sum = ans;
                if(sum==1){
                    printf("0\n");
                }else if(sum==2){
                    printf("1\n");
                }
        }
        if(k==3){
            sum=0;
            for(i=0;i<num;i++){
                if(a[i]%3==0){sum=1;}
                if(a[i]%3!=0 && a[i]%3==2){sum=2;}
                if(a[i]%3!=0 && a[i]%3!=2 && a[i]%3==1){sum=3;}

            if(ans>sum){ans=sum;}
        }
            sum = ans;

                if(sum==1){printf("0\n");}
                else if(sum==2){printf("1\n");}
                else if (sum==3){printf("2\n");}
        }
        if(k==5){
            sum=0;
            for(i=0;i<num;i++){
                if(a[i]%5==0){sum=1;}
                if(a[i]%5!=0 && a[i]%5==4){sum=2;}
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5==3){sum=3;}
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5!=3 && a[i]%5==2){sum=4;}
                if(a[i]%5!=0 && a[i]%5!=4 && a[i]%5!=3 && a[i]%5!=2 && a[i]%5==1){sum=5;}

                if(ans>sum){ans=sum;}
            }
            sum = ans;

                if(sum==1){printf("0\n");}
                else if(sum==2){printf("1\n");}
                else if (sum==3){printf("2\n");}
                else if(sum==4){printf("3\n");}
                else if(sum==5){printf("4\n");}
        }
        if(k==4){
            sum=0;
            for(i=0;i<num;i++){
                if(num==1){
                if(a[i]%4==0){sum=0;}
                else{sum=4-a[i]%4;}
                }
                if(num>=2){
                    if(a[i]%4==0){even+=2;}
                    else if(a[i]%2==0){even++;}

                    if(even>=2){sum=0;}
                    if(even==1){sum=1;}
                    if(even==0){
                        sum=2;
                        if(a[i]%4==3){sum=1;}
                    }
                }
                if(ans>sum){ans=sum;}
            }
            sum = ans;
                if(sum==0){printf("0\n");}
                if(sum==1){printf("1\n");}
                if(sum==2){printf("2\n");}
                if(sum==3){printf("3\n");}
        }
    }
    return 0;
}