#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-(i+1); j++){
			printf(" ");
		}
		for(int k=0; k<2*i+1; k++){
			if(k==0 || k==2*i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(int l=0; l<2*n-1; l++){
		printf("*");
	}
	printf("\n");
	
	for(int a=0; a<n; a++){
		for(int b=0; b<n-1; b++){
			printf(" ");
		}
		printf("*\n");
	}
}
