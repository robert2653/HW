#include <stdio.h>

int main() {
    int num, input, result = 0;

    scanf("%d", &num); // ��J�@�ӼƦr

    // �ϥ� XOR �B��έp�C�ӼƦr�X�{�����ƨç�X���G
    for (int i = 0; i < num; i++) {
        scanf("%d", &input);
        result ^= input;
    }

    // ��X���G
    printf("%d\n", result);

    return 0;
}
