#include <stdio.h>
#include <math.h>
int main(){
  int first_x, first_y, second_x, second_y;

  printf("Input the co-ordinate of first point: ");
  scanf("%d %d",&first_x, &first_y);

  printf("Input the co-ordinate for second point: ");
  scanf("%d %d", &second_x, &second_y);

  int distance = sqrt((first_x - second_x) * (first_x - second_x)  + (first_y - second_y) * (first_y - second_y) );

  printf("Distance is %d\n", distance);
}
