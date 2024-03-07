#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,result=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
         scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
       result=result^array[i];
    }
    printf("%d",result);


}



/*
 for(int i=0;i<n;i++){
        printf(" %d ",array[i]);
   }

*/
