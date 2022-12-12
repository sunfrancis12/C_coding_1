
/* Fixed decompose.c (Chapter 11) */

#include <stdio.h>

void decompose(double x, long* int_part, double* frac_part);

int main(void)
{
  long i;
  double d;
  double pi=3.14159;


  decompose(3.14159, &i, &d);

  printf("the integer part: %d\n", i);
  printf("the fractional part: %f\n", d);

  return 0;
}

void decompose(double x, long* int_part, double* frac_part)
{
	*int_part = (long) x;
	*frac_part = x - *int_part;
}
