#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d", &t); // ��J���ռƾڪ��ƶq t

    int results[t]; // �s�x�C�Ӵ��ռƾڪ����G
    int status=0;
    // �B�z�C�@�մ��ռƾ�
    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k); // ��J���ƶq n �M���� k

        int magic_values[n];

        int min_remainder = 0; // ��l�Ƴ̤p�l�Ƭ� k
        int min_operations = 0; // �̤p�ާ@���ƪ�l�Ƭ� 0

        status=0;

        // ��J�C�ӳ�쪺�]�O�ȡA�íp��l��
        for (int j = 0; j < n; j++) {
            scanf("%d", &magic_values[j]);
            int remainder = magic_values[j] % k;
            //printf("remainder=%d\n",remainder);
            if(remainder == 0)
            {
                //printf("remainder = magic_values[j] % k,%d,%d\n",magic_values[j],k);
                status=1;
            }
            // ��s�̤j�l��
            if (remainder > min_remainder) {
                min_remainder = remainder;
            }
        }


        // �p�G�̤p�l�Ƥ��� 0�A�ݭn�i��ާ@�Ϩ��Q k �㰣
        if (min_remainder != 0) {
            min_operations = k - min_remainder;
        }

        // �� k=4 �����p�i��S��B�z
        if (k == 4) {
            //int remainder0_count = 0;
            int remainder1_count = 0; // �l�Ƭ�1���ƶq
            int remainder2_count = 0; // �l�Ƭ�2���ƶq
            int remainder3_count = 0; // �l�Ƭ�3���ƶq
            // �έp�l�Ƭ� 1 �M�l�Ƭ� 2 ���ƶq
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

            // �ھھl�ƪ��ƶq�T�w�̤p�ާ@����
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

        // �p�G�@�}�l�N��Q�㰣�A�h�ާ@���Ƭ� 0
        /*if (min_remainder == 0) {
            min_operations = 0;
        }*/

        if(status == 1)
        {
            results[i] =0;
        }
        else
        {
            results[i] = min_operations; // �s�x���G
        }
    }

    // ��X�Ҧ����G
    for (int i = 0; i < t; i++) {
        //printf("status=%d\n",status);
        printf("%d\n", results[i]);
    }

    return 0;
}
