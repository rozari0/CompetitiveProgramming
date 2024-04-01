#include <stdio.h>

int zero_count(unsigned long long int num) {
  int count = 0;
  while (num % 10 == 0 && num >= 10) {
    count++;
    num = num / 10;
  }
  return count;
}

int main() {
  int T, n;
  scanf("%d", &T);
  while (T > 0) {
    scanf("%d", &n);
    unsigned long long int ans = 1;
    for (int i = 1; i <= n; i++) {
      ans = ans * i;
    }
    T--;

    printf("%d\n", zero_count(ans));
  }
  return 0;
}

// It does not work for 100
