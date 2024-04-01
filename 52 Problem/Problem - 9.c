#include <stdio.h>
#include <math.h>

int main(){
  short T;
  unsigned N;
  scanf("%hd", &T);
  while (T){
    scanf(" %d", &N);
    if (sqrt(N) * sqrt(N) == N){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
    T--;
  }

}
