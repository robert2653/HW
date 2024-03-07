#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k,p,t,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        if(k!=4){//K為4以外的情況
            int check=0/*檢查有沒有找到因數*/,min=6/*要拖延的分鐘數*/;
            for(int i=0;i<n;i++){
                scanf("%d",&p);
                r = k-(p%k);/*餘數跟除數差多少*/
                if(check==1){
                    continue;
                }
                if(p%k==0){/*整除 有因數 分鐘數為零*/
                    check=1;
                    min=0;
                }
                else{//沒有整除 分鐘數為除數跟餘數相差，擇最小的
                    if(r<min){
                        min=r;
                    }
                }
            }
            printf("%d\n",min);
        }
        else{/*k=4*/
            int check=0,min=6;
            for(int i=0;i<n;i++){
                scanf("%d",&p);
                r = k-(p%k);

                if(check==1){
                    continue;
                }
                if(p%k==0){//可被4整除
                    check=1;
                    min=0;
                }
                else if(p%2==0){//魔力值可被2整除但不能被4整除
                    k/=2;
                    if(n==1){//魔力值只有一個數值，且可被2整除但不能被4整除，因此需要+1*2才能整除
                        min=2;
                    }
                    else{//至少一個偶數，剩下的任一奇數+1即可被4整除
                        min=1;
                    }
                }
                else{//不能被2和4整除，分鐘數為除數跟餘數相差，擇最小的(有例外)
                    if(r<min){
                        min=r;
                    }
                }
            }//4例外
            if(n>=2&&k==4&&min>2){//例如1 1，兩個各+1(兩次)即可被整除
                min=2;
            }
            if(n>=2&&k==2&&min>1){//前面當K=4時且p中有偶數，k被/2，因此只要補1就可以被整除
                min==1;
            }
            printf("%d\n",min);
        }

    }
    return 0;
}


