#include<stdio.h>
#include<stdlib.h>


int main(){
	int t, n, k ;
	scanf("%d", &t);

	for(int i=0; i<t; i++ ){
		scanf("%d%d",&n,&k);

		int array[n];
		for(int j=0; j<n; j++){
			scanf("%d",&array[j]);
		}

		int min;//min time
		if(k != 4){
			if(array[0]%k==0)min=0;
			else{
                min=(k-array[0]%k);
                for(int j=1; j<n; j++){
                    if(array[j]%k==0)min=0;
                    else if(k-array[j]%k < min){
                    min=k-array[j]%k;
                    }
                }
			}
		}
		else{
            min=4;
			int flag=0;//find how many even
			for(int j=0 ;j<n ;j++){
				if(array[j]%4==0){
                    min=0;
                    break;
                }
                else if(array[j]%4==3)min=3;
                else if(array[j]%2==0)flag++;

			}
			if(n>1 && min!=0){
				if(flag<1 && min==3) min=1;
				else if(flag<1)min=2;
				else if(flag==1) min=1;
				else min=0;
			}
			else if(n==1){
                if(array[0]%4==0)min=0;
                else min=4-array[0]%4;
            }

		}

		printf("%d\n",min);
	}

}
