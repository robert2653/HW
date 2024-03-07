#include <stdio.h>
#include <stdlib.h>
int main(){
    int u,ti,k,t= 0;
    long long a,b;
    scanf("%d", &ti);
    for(int i=0; i<ti;i++){
        scanf("%d %d",&u,&k);
        scanf("%lld",&b);
        b%=k;
    	if(u==1&&k==4&&b%4==2){
        	t=2;
		}
        if(k==1){
        	t=1;
		}
        if(b%4==2&&k==4){
        	k=2;
        	b/=2;
		}
		if(b==0){
			t=1;
		}
        for(int j=0;j<u-1;j++){
            scanf("%lld",&a);
            a%=k;
            if(a==0){
                t=1;
            }
            if(a%2==0&&k==4){
            	k=2;
            	a/=2;
            	b%=2;
			}
            if(k-b>k-a){
                b=a;
            }
        }
        if(t==2){
        	printf("2\n");
		}
        else if(t==1){
        	printf("0\n");
		}
		else if(k==4&&u>1&&b==1){
			printf("2\n");
		}
		else{
			printf("%lld\n",k-b);
		}
		t=0;
    }
}
