/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * author :Ashutosh Sharma
 * date   :23.12.2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 



/**
 * Prints out statistics on data array
 *
 * Prints statistics of data array including minimum, maximum, mean, and median.
 *
 * parameters : The array to be analyzed
 *
 * return : no return
 */
void print_statistics(unsigned char a[] );

/**
 * Prints array to the screen
 *
 * Given an array of data and length, prints the array to the screen
 *
 * parameters : The array to be printed
 *
 * return : no return
 */
void print_array(unsigned char a[] );

/**
 * Finds median of array
 *
 * Returns mean of all elements in array
 *
 * parameters : The array to find the median
 *
 * return : The median of array
 */
unsigned char find_median(unsigned char a[] );

/**
 * Finds mean of array
 *
 * Returns mean of all elements in array
 *
 * parameters :The array to find mean
 *
 * return : The mean of array
 */
unsigned char find_mean(unsigned char a[]);

/**
 * Finds maximum of array
 *
 * Returns maximum value of all elements in array
 *
 * parameters : The array to find the maximum
 *
 * return : The maximum of array
 */
unsigned char find_maximum(unsigned char a[] );

/**
 * Finds minimum of array
 *
 * Returns minimum value of all elements in arrray
 *
 * parameters : The array to find the maximum
 *
 * return : The minimum of array
 */
unsigned char find_minimum(unsigned char a[]);

/**
 * Sorts array from largest to smallest
 *
 * Given an array of data and a length, sorts array from largest to smallest.
 * first element has largest value and the last elemenet has smallest value. 
 *
 * parameters : The array to sort
 *
 * return : no return
 */
void sort_array(unsigned char *ptr);


#endif /* __STATS_H__ */
