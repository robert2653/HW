#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int ax, ay, bx, by, cx, cy, A1, A2, K ;//宣告變數
  //輸入
  scanf ("%lld %lld %lld %lld %lld %lld", &ax, &ay, &bx, &by, &cx, &cy);
  //面積公式運算
  A1=ax*by+bx*cy+cx*ay;
  A2=bx*ay+cx*by+ax*cy;
  K=A1-A2;
  if (K=0)
  {
     printf("Yes");
  }
  else
  {
     printf("No");
  }
  return 0;
}
