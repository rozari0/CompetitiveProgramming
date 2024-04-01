#include <stdio.h>

int main() {
  int T = 1000;
  while (T > 0) {
    printf("%d\t%d\t%d\t%d\t%d\n", T, T - 1, T - 2, T - 3, T - 4);
    T = T - 5;
  }
  return 0;
}
