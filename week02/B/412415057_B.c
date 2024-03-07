#include <stdio.h>
#include <stdlib.h>

// �ˬd�@�ӼƦr�O�_�����
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // ���O���
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // ���O���
        }
    }
    return 1;  // �O���
}

int main() {
    int t;
    scanf("%d", &t);

    int results[t]; // �ΨӦs�񵲪G���}�C

    // ��J�Ʀr���ˬd�O�_�����
    for (int j = 0; j < t; j++) {
        int x;
        scanf("%d", &x);
        results[j] = isPrime(x);
    }

    // ��X���G
    for (int k = 0; k < t; k++) {
        printf("%s\n", results[k] ? "Yes" : "No");
    }

    return 0;
}
