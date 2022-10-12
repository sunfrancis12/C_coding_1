/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, third_sum,total;

  scanf("%1d", &d);
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  first_sum = d + i3 + j1 + j4;
  second_sum = i1 + i4 + j2 + j5;
  third_sum = i2 + i5 + j3;

  total = 3 * first_sum + second_sum + third_sum;


  printf("%d", 9 - ((total - 1) % 10));

  return 0;
}
