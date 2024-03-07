#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
            int flag = 0;
        scanf("%d",&array[i]);
        if(array[i]==1)printf("No\n");
        else if(array[i]==2)printf("Yes\n");
        else if (array[i]%2==0)printf("No\n");
        else{
            for(int j=3;j<sqrt(array[i])+1;j=j+2){
                if(array[i]%j==0){
                    printf("No\n");
                    flag++;
                    break;
                }
        }
        if(flag == 0)printf("Yes\n");
        }
    }

}
