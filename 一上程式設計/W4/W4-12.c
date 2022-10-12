#include <stdio.h>

int main(void)
{
  int  i1, i2, i3, i4, j1, j2, j3, j4, a1, a2, a3, a4,
      first_sum, second_sum,total;

  printf("Enter the first 12 digits of an EAN:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &j1, &j2, &j3, &j4, &a1, &a2, &a3, &a4);

  first_sum = i2 + i4 + j2 + j4 + a2 + a4;
  second_sum = i1 + i3 + j1 +j3 +a1 +a3;
 
  total = 3 * first_sum + second_sum - 1;

  printf("Check digit:%d", 9 - (total % 10));

  return 0;
}
