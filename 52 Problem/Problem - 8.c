#include <stdio.h>

int main(){
  short T;
  scanf("%hd",&T);
  int N[3];
  for (int index = 1; index<=T; index++){
    scanf(" %d %d %d", &N[0], &N[1], &N[2]);

    for (int i = 1; i<=3; i++){
      int j= i - 1, item = N[i];
      while (j>=0 && N[j]>item ){
        N[j+1] = N[j];
        j--;
      }
      N[j+1] = item;
    }

    printf("Case %d:", index);
    for (int i = 0; i< sizeof(N)/sizeof(N[0]); i++){
      printf(" %d", N[i]);
    }
    printf("\n");
  }
  return 0;
}
