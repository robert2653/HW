// not best answer
#include <stdio.h>
#include <stdbool.h>
#define SIZE 200000

_Bool isDivByTwo(long long x, int k);
int main(void)
{
    int t = 0,
        n = 0,
        k = 0,
        minOpr = 0,
        minOprLoc = 0;
    long long nums[SIZE] = {0};
    scanf("%d", &t);
    for(int i = 0; i<t; i++){
        scanf("%d %d", &n, &k);
        for(int j = 0; j<n; j++){ // input nums
            scanf("%lld", &nums[j]);
        }

        minOpr = 5;// initialize

        if(n == 1){
            if(nums[0] % k == 0){
                minOpr = 0;
            }else{
                minOpr = k-nums[0]%k;
            }
        }else if(k == 1){
            minOpr = 0;
        }else if(k == 4){// k == 4
            //printf("k==4\n");
            for(int j = 0; j<n; j++){
                if(isDivByTwo(nums[j], k) == true){
                    //printf("Div_1 -> nums[j] == %lld, k == %d\n", nums[j], k);
                    nums[j]/=2;
                    k/=2;
                    if(isDivByTwo(nums[j], k) == true){// judge again
                        //printf("Div_2 -> nums[j] == %lld, k == %d\n", nums[j], k);
                        nums[i]/=2;
                        k/=2;
                        minOpr = 0;
                        break;
                    }
                }
            }
            //printf("Input over\n");
            minOpr = 4;
            minOprLoc = 0;
            for(int j = 0; j<n; j++){
                if(nums[j]%k == 0){
                    minOpr = 0;
                    break;
                }else if((k-nums[j]%k) < minOpr){
                    minOpr = k-nums[j]%k;
                    minOprLoc = j;
                }
            }
            if(minOpr == 3){
                nums[minOprLoc]++;
                k/=2;
                nums[minOprLoc]/=2;
                for(int j = 0; j<n; j++){
                    if(nums[j]%k == 0){
                        minOpr = 0;
                        break;
                    }else if((k-nums[j]%k) < minOpr){
                        minOpr = k-nums[j]%k;
                        minOprLoc = j;
                    }
                }
                minOpr++;
            }
        }else{// k == 2, 3, 5

            for(int j = 0; j<n; j++){
                if(nums[j]%k == 0){
                    minOpr = 0;
                    break;
                }else if((k-nums[j]%k) < minOpr){
                    minOpr = k-nums[j]%k;
                }
            }

        }
        printf("%d\n", minOpr);
    }

    return 0;
}

_Bool isDivByTwo(long long x, int k){
    if(x%2 == 0 && k % 2 == 0){
        return true;
    }else{
        return false;
    }
}
