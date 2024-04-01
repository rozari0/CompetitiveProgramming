#include <stdio.h>

int main() {
  int T, N;
  scanf("%d", &T);
  while (T) {
    scanf("%d", &N);
    int last = N % 10, first = N;
    do {
      first = first / 10;
    } while (first > 9);

    printf("Sum = %d\n", last + first);

    T--;
  }
  return 0;
}
