#include <stdio.h>
#include <math.h>
int main(){
  int m,n,a;
  scanf("%d %d %d",&m, &n, &a);

  printf("%d",ceil(m / a) * ceil( m /a ));

}
