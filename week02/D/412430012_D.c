#include <stdio.h>

#define MAX_N 1000

int min_operations(int n, int k, int magic[MAX_N]) {
    int min_magic = magic[0];
    for (int i = 1; i < n; i++) {
        if (magic[i] < min_magic) {
            min_magic = magic[i];
        }
    }
    
    int operations = 0;
    for (int i = 0; i < n; i++) {
        operations += (magic[i] - min_magic + k - 1) / k; // 使用向上取整的方法計算操作次數
    }
    
    return operations;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        int magic[MAX_N];
        for (int i = 0; i < n; i++) {
            scanf("%d", &magic[i]);
        }
        
        int operations = min_operations(n, k, magic);
        printf("%d\n", operations);
    }
    
    return 0;
}

