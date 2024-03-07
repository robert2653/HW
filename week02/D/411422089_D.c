#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // 幾筆資料

    while (t--) {
        int n=0, k=0;
        //printf("start\n");
        scanf("%d%d", &n, &k); // 單位數量和除數
        //printf("n1 = %d\nk=%d\n", n, k);

        int minOps = k; // 初始化最小操作次数为 k
        int flag = 1; // 假设所有单位的魔力值都能被 k 整除
        int two_counter = 0;
        int one_counter = 0;

        int arr[200001];
        for(int i=0;i<n;i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++) {
            int ai = arr[i];
            //scanf("%d", &ai); // 單位的魔力值

            if (ai % k ==0){ // 一有單位整除則跳出迴圈
                minOps = 0;
                flag = 1;
                break;
            }
            if(k == 4 && (ai % k == 2) ){
                two_counter++;
                if(two_counter >= 2){
                /////////////////////////////
                    flag = 1 ;
                    break;
                }
            }
            if(k == 4)
            {
                if(ai % k == 1)
                {
                    one_counter++;
                }
                if(two_counter>=1 && one_counter>0)
                {
                    if(minOps>1)
                        minOps = 1;
                }
                if(one_counter>=2)
                {
                    if(minOps>2)
                        minOps = 2;
                }
            }

            if (ai % k != 0) {
                flag = 0; // 如果有任意一个单位的魔力值不能被 k 整除，更新标志位
                int ops = k - (ai % k); // 计算需要增加的次数
                if (ops < minOps) {
                    minOps = ops; // 更新最小操作次数
                }
            }
        }

        if (flag) {
            minOps = 0; // 如果所有单位的魔力值都能被 k 整除，最小操作次数为 0
        }

        printf("%d\n", minOps); // 输出最小操作次数
    }

    return 0;
}
