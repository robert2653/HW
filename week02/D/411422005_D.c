#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t = 0;
    scanf("%d", &t);
    int cc[200001];
    for (int i = 0; i < t; i++)
    {
        int count3 = 0,count2=0,count1=0,count0=0;
        int n;
        scanf("%d", &n);
        //printf("#%d", n);
        int k;
        scanf("%d", &k);
        //printf("#%d", k); // 这行应该放在读取 k 之后

        int c[200001] = {0};
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &c[j]);
            // printf("**%d",c[i]);
        }

        int temp = (k-c[0]%k)%k;
        //printf("!%d\n",temp);
        if (k != 4)
        {

            if(n==1){
                    //printf("**%d",c[0]);
                temp=(k-c[0]%k)%k;
            }else{
            for (int j = 1; j < n; j++)
            {
                if (temp >= (k-c[j]%k)%k)
                {
                    temp = (k-c[j]%k)%k;
                    //printf("*%d!%d!%d*\n",temp,j,(k-c[j]%k)%k);
                }
            }
            }

            cc[i] =temp;
            //printf("!%d\n",cc[i]); // 这行应该注释掉，否则会影响后续的输出
        }
        else{
            count3=0,count2=0,count1=0,count0=0;
            for (int j = 0; j < n; j++){
                //printf("c[j]/k=%d\n",k-c[j]%k);
             switch(c[j]%k){
             case 0:
                count0++;
                //printf("count0++%d\n",count0);
                break;
             case 1:
                count1++;
                //printf("count1++%d\n",count1);
                break;
             case 2:
                count2++;
                //printf("count2++%d\n",count2);
                break;
             case 3:
                count3++;
                //printf("count3++%d\n",count3);
                break;
             }
            }
            if(count0!=0){
                cc[i]=0;
                //printf("count0%d\n",cc[i]);
            }else if(count3>=1&&count2<2){
                cc[i]=1;
                //printf("count3%d\n",cc[i]);
            }else if(count2>=2){
                cc[i]=0;
                //printf("count22%d\n",cc[i]);
            }else if(count2==1){
                if(count1>=1){
                    cc[i]=1;
                    //printf("count21%d\n",cc[i]);
                }else{
                    cc[i]=2;
                }

                //printf("count20%d\n",cc[i]);
            }else if(count2==0){
                if(count1>=2){
                    cc[i]=2;
                    //printf("count2012%d\n",cc[i]);
                }else if(count1<2){
                    cc[i]=3;
                    //printf("count2013%d\n",cc[i]);
                }
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", cc[i]);
    }


return 0;
}
