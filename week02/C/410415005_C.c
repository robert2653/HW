#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int i,j,z;
    for(i=0;i<n;i++){//�T����
        for(j=0;j<n-i-1;j++){ //�L�ť�
            printf(" ");
        }

        if(i==0){ //�Ĥ@�C�����p
            printf("*\n");
            continue;
        }else if(i==(n-1)){ //�̫�@�C�����p
            z=i+(i-1)+2;
            for(;z>0;z--){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");//�_�I*

            z=i+(i-1);
            for(;z>0;z--){
                printf(" ");
            }

            printf("*\n");//���I*
        }
    }

    for(i=0;i<n;i++){//��F
        for(j=0;j<n-1;j++){
            printf(" ");
        }
        printf("*\n");
    }
    return 0;

}
