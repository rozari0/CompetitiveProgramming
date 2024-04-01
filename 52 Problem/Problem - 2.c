#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  char n[101];

  while (T > 0) {
    scanf("%s", n);
    int size = 0;
    for (int i = 0; n[i] != '\0'; i++) {
      size++;
    }
    if (n[size - 1] % 2 == 0) {
      printf("even\n");
    } else {
      printf("odd\n");
    }
    T--;
  }
}
