#include <stdio.h>
#include <stdlib.h>

int main()

{

 int n,i,j,k,l;

 scanf("%d",&n);

 for(i=1;i<=n;i++)

 {

for(j=0;j<n-i;j++)

printf(" ");

if(i>1)

{

    printf("*");

    for(j=1;j<2*(i-1);j++)

    if(i<n)printf(" ");

      else printf("*");

}

printf("*\n");

 }

 for(k=0;k<n;k++){
    for(l=1;l<n;l++){
        printf(" ");
    }
    printf("*\n");
 }


    return 0;
}
