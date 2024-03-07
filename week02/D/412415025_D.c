#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,k,i,j,m,p,mag,left,tim2,tim1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        m = 6;
        tim2 = 0;
        tim1=0;
        if(k==4)
        {
            for(j=0;j<n;j++)
            {
              scanf("%d",&mag);
              if(m==0)
               {
                  continue;
               }

              left=mag%k;
              p=(k-left);
              if(left==0)
               {
                  m=0;
                  continue;
               }

              else if(left==2)
              {
                  tim2++;
                  if(p<m)
                  {
                     m=p;
                  }

                  if(tim2>=2)
                  {
                     m=0;
                  }
                  continue;
              }

              else if (p<m)
              {
                m=p;
              }

              if(tim2==1)
              {
                  p=2-mag%2;
                  if(p<m)
                  {
                    m=p;
                  }
              }

              if(p==3)
              {
                  tim1++;
              }

            }

            if(tim2==1&&tim1>=1&&m>1)
            {

                m=1;
            }


            else if(m>2&& tim1>=2)
             {
                 m=2;
             }

            printf("%d\n",m);
        }

        else
        {
            for(j=0;j<n;j++)
            {
              scanf("%d",&mag);
              if(m==0)
               {
                  continue;
               }
              left=mag%k;
              p=(k-left);

              if(left==0)
              {
                 m=0;
              }

              else if(p<m)
              {
                 m=p;
              }
            }

           printf("%d\n",m);
        }
    }

    return 0;
}
