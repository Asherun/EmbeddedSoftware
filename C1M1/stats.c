/**
 * @file stats.c 
 * @brief Sort and get statistics of an array
 *
 * The program is sorting N value array and 
 * and prints the statistics of the array.
 * Values like minimum, maximum, mean and median.
 *
 * @author Asher Baranes
 * @date September 2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Statistics and Printing*/
  
  printf("The original array:\n");
  print_array(test, SIZE);
  printf("The sorted array:\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("Array statistics:\n");
  print_statistics(find_minimum(test, SIZE), find_maximum(test, SIZE), find_mean(test, SIZE), find_median(test, SIZE));
  
}








  
