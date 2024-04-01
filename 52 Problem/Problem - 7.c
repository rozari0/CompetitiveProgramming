#include <stdio.h>

int main() {
  int T, Number;
  char N[1000];
  scanf("%d ", &T);
  while (T) {
    fgets(N, sizeof(N), stdin);
    Number = 1;
    for (int i = 0; N[i] != '\n'; i++) {
      if (N[i] == ' ')
        Number++;
    }
    printf("%d\n", Number);

    T--;
  }

  return 0;
}
