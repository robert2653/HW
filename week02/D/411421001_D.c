#include <stdio.h>

int main(){
    int t,n,k;
    scanf("%d\n",&t);
    
    for(int i=0; i<t; i++){     
        scanf("%d %d\n",&n,&k);
        long long a[n],b[n];
        for(int j=0; j<n; j++){
            scanf("%lld",&a[j]);
            b[j]=a[j]%k;
        }
        if(k==4 && n>1){
            int c=0;		//有幾個因數2
            int d=0;		//有餘數3
            for(int m=0; m<n || c>2; m++){
                if(b[m]==0){
                	 printf("0\n");
                	 c=-1;
                	 break;
                }
                if(b[m]==2){
                	c=c+1;
                }
                if(b[m]==3){
                	d=1;
                }
            }
            if(c==0){
            	if(d==1){
            		printf("1\n");
            	}
            	else{
            		printf("2\n");
            	}
            }
            else if(c==1){
            	printf("1\n");
            }
            else if(c==2){
            	printf("0\n");
            }
        }
        else{
            int max=b[0];               //if k!=4
            for(int l=0; l<n; l++){     //找要加1的資料要加幾個1(找最大的餘數)
                if(b[l]==0){            //if a[n]=k 整除
                    max=k;
                }
                if(b[l]>max){
                    max=b[l];
                }
            }
            printf("%d\n",k-max);   
        }
        
    }
}
