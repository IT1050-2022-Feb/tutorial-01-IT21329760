/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float no1,no2;
  float avg;

  printf("Enter number 01: ");
  scanf("%f",&no1);
  
  printf("Enter number 02: ");
  scanf("%f",&no2);
  

  avg = (no1 + no2)/2.0;
  printf("Average is: %f ",avg);
  return 0;
}

