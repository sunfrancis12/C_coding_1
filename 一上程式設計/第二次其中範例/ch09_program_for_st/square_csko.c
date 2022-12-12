#include <stdio.h>

int square(int n)
{
	return n * n;
}

int main(void)
{
	double x = 3.0;
	//int x = 3;
	printf("Square: %d\n", square(x));
	return 0;
}
