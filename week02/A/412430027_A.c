#include <stdio.h>
#include <stdlib.h>

int findOddOccurrence(int arr[],int size){
    int result = 0;
    for(int i =0;i<size;i++){
        result ^=arr[i];
    }
    return result;

}


int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result = findOddOccurrence(arr,n);
    printf("%d\n",result);
    return 0;
}
