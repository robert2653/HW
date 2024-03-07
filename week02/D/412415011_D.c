#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, i, lowmath, test;
    int inmath[200004];

    scanf("%d", &t);
    int tt[t], nn[t], kk[t];
    long long save1[] = {0};

    for(i=0;i<t;i++){
        scanf("%d %d", &nn[i], &kk[i]);
        save1[i] = 1;

        if(kk[i] == 4){
            int test1 = 0, test2 = 0, test3 = 0;
            for(int j=0;j<nn[i];j++){
                scanf("%d", &inmath[j]);
                save1[i] = save1[i] * inmath[j];
                if(inmath[j] % 4 == 3){
                    test3++;
                }
                else if(inmath[j] % 2 == 0){
                    test2++;
                }
                else if(inmath[j] % 4 == 1){
                    test1++;
                }
            }
            if(nn[i]==1)
            {
                if(inmath[0]%kk[i]==0)
                    tt[i] = 0;
                else
                    tt[i] = kk[i]-inmath[0]%kk[i];
            }
            else{
                lowmath = save1[i] % 4;
                if(lowmath == 0){
                    tt[i] = 0;
                }
                else if(test3 > 0){
                    tt[i] = 1;
                }
                else if(test2 == 1 && test1 > 0){
                    tt[i] = 1;
                }
                else{
                    tt[i] = 2;
                }
            }

        }
        else if(kk[i] == 1){
            for(int j=0;j<nn[i];j++){
                scanf("%d", &inmath[j]);
            }
            tt[i] = 0;
        }
        else{
            lowmath = kk[i];
            for(int j=0;j<nn[i];j++){
                scanf("%d", &inmath[j]);

                test = inmath[j] % kk[i];
                if(lowmath > kk[i] - test){
                    lowmath = kk[i] - test;
                }
                if(test == 0){
                    lowmath = 0;
                }

            }
            tt[i] = lowmath;
        }
        printf("%d\n", tt[i]);
    }
    return 0;
}
