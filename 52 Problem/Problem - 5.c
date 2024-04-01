#include <stdio.h>

int main() {
  short T;
  int N;
  scanf("%hd", &T);
  while (T) {
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        printf("*");
      }
      printf("\n");
    }
    T--;
  }
  return 0;
}
