#include <iostream>

int main() {
  int T, n;
  scanf("%d", &T);
  while (T > 0) {
    scanf(" %d", &n);
    if (n % 2 == 0) {
      printf("even\n");
    } else {
      printf("odd\n");
    }
    T--;
  }
}
