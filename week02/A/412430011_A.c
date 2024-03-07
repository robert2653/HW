#include <stdio.h>
#include <stdlib.h>

int t(int a[], int n) {
int result = 0;
for (int i = 0; i < n; i++) {
result ^= a[i];
}
return result;
}

int main() {
int n;
printf("");
scanf("%d", &n);

int a[n];
printf("");
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
}

int odd = t(a, n);
if (odd == 0) {
printf("0\n");
}
else {
printf("%d\n", odd);
}

return 0;
}
