#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d", &t); // 块代刚计沮计秖 t

    int results[t]; // 纗–代刚计沮挡狦
    int status=0;
    // 矪瞶–舱代刚计沮
    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k); // 块虫计秖 n ㎝埃计 k

        int magic_values[n];

        int min_remainder = 0; // ﹍て程緇计 k
        int min_operations = 0; // 程巨Ω计﹍て 0

        status=0;

        // 块–虫臸璸衡緇计
        for (int j = 0; j < n; j++) {
            scanf("%d", &magic_values[j]);
            int remainder = magic_values[j] % k;
            //printf("remainder=%d\n",remainder);
            if(remainder == 0)
            {
                //printf("remainder = magic_values[j] % k,%d,%d\n",magic_values[j],k);
                status=1;
            }
            // 穝程緇计
            if (remainder > min_remainder) {
                min_remainder = remainder;
            }
        }


        // 狦程緇计ぃ 0惠璶秈︽巨ㄏㄤ砆 k 俱埃
        if (min_remainder != 0) {
            min_operations = k - min_remainder;
        }

        // 癸 k=4 薄猵秈︽疭矪瞶
        if (k == 4) {
            //int remainder0_count = 0;
            int remainder1_count = 0; // 緇计1计秖
            int remainder2_count = 0; // 緇计2计秖
            int remainder3_count = 0; // 緇计3计秖
            // 参璸緇计 1 ㎝緇计 2 计秖
            for (int j = 0; j < n; j++) {
                if (magic_values[j] % 4 == 1) {
                    remainder1_count++;
                } else if (magic_values[j] % 4 == 2) {
                    remainder2_count++;
                }
                  else if (magic_values[j] % 4 == 3) {
                    remainder3_count++;
                }
                /*else if(magic_values[j] % 4 == 0)
                {
                    remainder0_count++;
                }*/
            }

            // 沮緇计计秖絋﹚程巨Ω计
            if (remainder2_count>=2) {
                min_operations =0;
            }
             else if (remainder3_count >= 1) {
                min_operations = 1;
            }
             else if (remainder1_count >= 1 && remainder2_count == 1) {
                min_operations = 1;
            }

             else if (remainder1_count>=2 && remainder2_count==0) {
                min_operations =2;
            }
            else{
                min_operations = k - min_remainder;
            }
        }

        // 狦秨﹍碞砆俱埃玥巨Ω计 0
        /*if (min_remainder == 0) {
            min_operations = 0;
        }*/

        if(status == 1)
        {
            results[i] =0;
        }
        else
        {
            results[i] = min_operations; // 纗挡狦
        }
    }

    // 块┮Τ挡狦
    for (int i = 0; i < t; i++) {
        //printf("status=%d\n",status);
        printf("%d\n", results[i]);
    }

    return 0;
}
