/******************************************************************************
 * Copyright (C) 2020 by Asher Baranes - Ariel University of Samaria
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Asher Baranes and Ariel University of Samaria are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief collection of procedures to arrange data
 *
 * This program includes various procedures to
 * sort array and find several statistics.
 * all calculation and sortind done on the array
 * itself by pointers.
 *
 * @author Asher Baranes
 * @date Sep 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print All Statistics
 *
 * This fumction return all the statistics and print them.
 *
 * @param <min> <minimum value>
 * @param <max> <maximum value>
 * @param <mean> <mean value>
 * @param <median> <median value>
 *
 */

void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median){
  printf("minimum: %d, maximum: %d, mean: %f, median: %f\n", min, max, mean, median);
}

/**
 * @brief Print Array Values
 *
 * This function prints array values
 *
 * @param <*array> <array pointer>
 * @param <array_len> array length>
 *
 */
 
void print_array(unsigned char *array, unsigned int array_len){
  
  for (int i = 0; i < array_len; i++){
    printf("array[%d]: %d\n", i, *array);
    array++;
  }
  printf("\n");
  
}

/**
 * @brief Find Median Value
 *
 * This Function calculates the median of an array.
 * Themedian calculates by lookung if the length is odd or
 * even and then look for the middle index of the array.
 *
 * @param <*array> <array pointer>
 * @param <array_len> array length>
 *
 * @return Median Value
 */
 
unsigned char find_median(unsigned char *array, unsigned int array_len){
  
  int median_index, median;
  
  if (array_len % 2 != 0)
    median_index = (array_len/2) + 1;
  else
    median_index = (array_len/2);
  
  median = *(array + median_index);
      
  return median;
}

/**
 * @brief Find mean of and Array
 *
 * This function calculates mean of an array
 * by adding all the indexes and divide them by the
 * length of the array.
 *
 * @param <*array> <array pointer>
 * @param <array_len> array length>
 *
 * @return <Add Return Informaiton here>
 */
 
unsigned char find_mean(unsigned char *array, unsigned int array_len){
  
  unsigned char mean = 0;
  for (int i = 0; i < array_len; i++){
    mean += *array;
    array++;
  }
  return mean;
}
 
unsigned char find_maximum(unsigned char *array, unsigned int array_len){
  
  unsigned char maximum;
  
  maximum = *array;
  
  return maximum;

}
 
unsigned char find_minimum(unsigned char *array, unsigned int array_len){
  
  int minimum;
  
  minimum = *(array + array_len - 1);
  
  return minimum;
}
 
unsigned char sort_array(unsigned char *array, unsigned int array_len){
  
  int tmp;
  
  for (int i = 0; i < array_len; i++)
  {
    for (int j = i + 1; j < array_len; j++)
    {
      if (*(array+i) < *(array+j))
      {
        tmp = *(array+i);
        *(array+i) = *(array+j);
        *(array+j) = tmp;
      }
    }
  }
  
  return array[array_len];
}

#endif /* __STATS_H__ */
