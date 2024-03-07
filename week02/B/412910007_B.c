#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
  if(n <= 1) return false;

  for(int i=2; i*i<=n; i++) {
    if(n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {

  int t;
  scanf("%d", &t);

  int nums[t];
  for(int i = 0; i < t; i++) {
    scanf("%d", &nums[i]);
  }

  for(int i = 0; i < t; i++) {
    if(isPrime(nums[i])) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  return 0;
}
