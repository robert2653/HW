#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int A[2003000],count=0,num,k;
    int array[2003000];

    while(count<t)
    {
        int one=0,two=0,three=0,four=0,in=0;
        A[count] = 0;
        scanf("%d %d",&num,&k);
        while(in<num)
        {
            scanf("%d",&array[in]);
            in++;
        }
        in = 0;

        if(k == 4)
        {
            int yu = 0;
            while(in < num)
            {
                yu = array[in] % k;

                if(yu == 1 && one < 2)
                    one++;

                else if(yu == 2 && two < 2)
                    two++;

                else if(yu == 3 && three < 1)
                    three++;

                else if(yu == 0 && four < 1)
                    four ++;
                in ++;
            }

            if(four == 1 || two == 2)
                A[count] = 0;

            else if(three > 0 || (two == 1  && one > 0))
                A[count] = 1;

            else if((two == 1 && one == 0 && three == 0 && four ==0) || one == 2)
                A[count] = 2;

            else if(one == 1)
                A[count] = 3;
        }

        else if(k != 4)
        {
            int max = 0, data = 0, flag = 0;
            while(in<num)
            {
                data = array[in] % k;
                if(data == 0)
                {
                    flag = 1;
                }
                if(data > max)
                {
                    max = data;
                }
                in ++;
            }
            if(flag == 1)
            {
                A[count] = 0;
            }
            else
            {
                A[count] = k -max;
            }
        }
        count++;
    }

    for(int i=0; i<t; i++)
    {
        printf("%d\n",A[i]);
    }

    return 0;
}
