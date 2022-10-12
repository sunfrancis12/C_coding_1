#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, j1, j2, j3, j4, a1, a2, a3, a4,
      first_sum, second_sum, third_sum,total;

  scanf("%1d", &d);
  scanf("%1d%1d%1d%1d", &i1, &i2, &i3, &i4);
  scanf("%1d%1d%1d%1d", &j1, &j2, &j3, &j4);
  scanf("%1d%1d%1d%1d", &a1, &a2, &a3, &a4);
  first_sum = d + i2 + i4 + j2 + j4;
  second_sum = i1 + i3 + j1 + j3;
  third_sum = a1 + a2 + a3 + a4;
 
  total = 2 * first_sum + second_sum + third_sum + 5;


  printf("%d", 9 - (total % 7));

  return 0;
}
