/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
 {
  double sub1, sub2;
  printf ("Enter tha marks of subject 1 : ");
  scanf ("%lf", &sub1);
  printf ("Enter tha marks of subject 2 : ");
  scanf ("%lf", &sub2);
  printf ("The average is : %.2lf", (sub1 + sub2) / 2 );
  return 0;
}

