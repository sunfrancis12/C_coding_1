#include <stdio.h>

int main(void)
{
  float commission, value;

  printf("Enter amount of taxable income: ");
  scanf("%f", &value);

  if (value <= 750)
    commission = .01 * value;
  else if (value <= 2250)
    commission = 7.5 + .02 * (value-750);
  else if (value <= 3750)
    commission = 37.5 + .03 * (value-2250);
  else if (value <= 5250)
    commission = 82.5 + .04 * (value-3750);
  else if (value <= 7000)
    commission = 142.5 + .05 * (value-5250);
  else
    commission = 230 + .06 * (value-7000);

  printf("Tax due is: $%.2f", commission);

  return 0;
}
