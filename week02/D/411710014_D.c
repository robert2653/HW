#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int t=0,n=0,k=0;
    int min_ops=0,tmp_ops=0,even_ops=0,a=0,i=0,j=0;//min_ops最少次，tmp_ops暫時次
    int count_even=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&n,&k);
        min_ops=(k-1);//最少次一定小於除數
        if(k==4){//4=偶*偶
            if(n==1){
                scanf("%d",&a);
                tmp_ops=a%4;
                if(tmp_ops==0){
                    min_ops=0;
                }else{
                    min_ops=4-tmp_ops;
                }
            }else{
                count_even=0;
                for(j=1;j<=n;j++){
                    scanf("%d",&a);
                    tmp_ops=a%4;
                    if(tmp_ops==0){
                        min_ops=0;
                    }else if(tmp_ops==2){
                        count_even++;
                    }else if(tmp_ops==3){
                  if(min_ops>1){
       min_ops=1;
      }
     }
                }
    if(count_even>=2){//有幾個偶數
     even_ops=0;
    }else if(count_even==1){
     even_ops=1;
    }else{
     even_ops=2;
    }
    if(even_ops<min_ops){
     min_ops=even_ops;
    }
            }
        }else{
            for(j=1;j<=n;j++){
                scanf("%d",&a);
                if(min_ops!=0){
                       // printf("a=%d,k=%d\n",a,k);
                    tmp_ops=a%k;
                    if(tmp_ops==0){
                        min_ops=0;
                        //printf("(1)min_ops=%d\n",min_ops);
                    }else{
                        tmp_ops=k-tmp_ops;
                        if(tmp_ops<min_ops){
                            min_ops=tmp_ops;
                          //  printf("(2)min_ops=%d,tmp_ops=%d\n",min_ops,tmp_ops);
                        }
                    }
                }
            }
        }
        printf("%d\n",min_ops);
    }
    return 0;
}