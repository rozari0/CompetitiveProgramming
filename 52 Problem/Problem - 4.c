#include <stdio.h>

int main() {
  short T;
  scanf("%hd", &T);
  int N;
  for (int i = T; i; i--) {
    scanf("%d", &N);
    printf("Case %d:", T - i + 1);
    for (int i = 1; i <= N; i++) {
      if (N % i == 0) {
        printf(" %d", i);
      }
    }
    printf("\n");
  }
  return 0;
}
