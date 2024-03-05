#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int ax, ay, bx, by, cx, cy, A1, A2, B1, B2, K ;//宣告變數
  //輸入
  scanf ("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
  //面積公式運算
  A1=bx-ax;
  A2=by-ay;
  B1=cx-ax;
  B2=cy-ay;
  K=A1*B2-A2*B1;
  if (K>0)
  {
     printf("Left");
  }
  else if(K<0)
  {
     printf("Right");
  }
  else
  {
     printf("Touch");
  }
  return 0;
}
