/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* sum2.c (Chapter 7, page 131) */
/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int sum_array(int a[], int n)
	{
	  int i, mySum = 0;
	  for (i = 0; i < n; i++)
        mySum += a[i];
      return mySum;
	}


int main(void)
{
  //long n, sum = 0;

  printf("This program sums a series of integers.\n");
  printf("Enter  6 integers and press enter to end: ");

  //scanf("%ld", &n);
  int b[6];
  int sum=0, n,i=0;
  for (i=0; i< 6; i++){
     scanf("%ld", &n);
     b[i]=n;
     printf("The element %d is: %d\n", i, b[i]);

  }
   sum = sum_array(b, 6);
   printf("The sum is: %d\n", sum);

  return 0;
}
