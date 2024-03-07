#include <stdio.h>
#include <stdlib.h>
int main(){
    int unit, time, k, test = 0;
    long long temp2, temp1;
    scanf("%d", &time);
    for(int i = 0; i < time; i++){
        scanf("%d %d", &unit, &k);
        scanf("%lld", &temp1);
        temp1 %= k;
    	if(unit == 1 && k == 4 && temp1 % 4 == 2){
        	test = 2; 
		}
        if(k == 1){
        	test = 1;
		}
        if(temp1 % 4 == 2 && k == 4){
        	k = 2;
        	temp1 /= 2;
		}
		if(temp1 == 0){
			test = 1;
		}
        for(int j = 0; j < unit - 1; j++){
            scanf("%lld", &temp2);
            temp2 %= k;
            if(temp2 == 0){
                test = 1;
            }
            if(temp2 % 2 == 0 && k == 4){
            	k = 2;
            	temp2 /= 2;
            	temp1 %= 2;
			}
            if(k - temp1 > k - temp2){
                temp1 = temp2;
            }
        }
        if(test == 2){
        	printf("2\n");
		}
        else if(test == 1){
        	printf("0\n");
		}
		else if(k == 4 && unit > 1 && temp1 == 1){
			printf("2\n");
		}
		else{
			printf("%lld\n", k - temp1);
		}
		test = 0;
    }
}