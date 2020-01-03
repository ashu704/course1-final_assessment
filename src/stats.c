/******************************************************************************
   Copyright (C) 2017 by Alex Fosdick - University of Colorado
 
   Redistribution, modification or use of this software in source or binary
   forms is permitted as long as the files maintain this copyright. Users are 
   permitted to modify this and use it to learn about the field of embedded
   software. Alex Fosdick and the University of Colorado are not liable for any
   misuse of this material. 
 
 *****************************************************************************/
/*
   @file stats.c 
   @brief <Add Brief Description Here >
 
   <Add Extended Description Here>
 
   @author  : Ashutosh Sharma
   @date    : 22.12.2019
 
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  printf("Given array :\n");
  print_array(test);
  sort_array(test);
  printf("sorted array :\n");
  print_array(test);
  print_statistics(test);
  return 0;

}


void print_array(unsigned char a[]){
	for(int i=0;i<SIZE;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
  
}

void sort_array(unsigned char *ptr){
  int i,j,t;
  for (i = 0; i < SIZE; i++){ 
    for (j = i + 1; j < SIZE; j++){ 
      if (*(ptr + j) > *(ptr + i)){ 
        t = *(ptr + i); 
        *(ptr + i) = *(ptr + j); 
        *(ptr + j) = t; 
      } 
    } 
  } 
}

unsigned char find_mean(unsigned char a[]){
  int sum =0;
  for(int i=0; i<SIZE; i++)
    sum += a[i];
  return(sum/SIZE);
}

unsigned char find_median(unsigned char a[]){
  if(SIZE%2==0)
    return ((a[SIZE/2]+a[(SIZE/2)-1])/2);
  else
    return a[SIZE/2];
      
}

unsigned char find_maximum(unsigned char a[]){
  int max =a[0];
  for(int i=1;i<SIZE;i++){
    if(a[i]>max)
      max = a[i];
  }
  return max;
}

unsigned char find_minimum(unsigned char a[]){
  int min =a[0];
  for(int i=1;i<SIZE;i++){
    if(a[i]<min)
      min = a[i];
  }
  return min;
}

void print_statistics(unsigned char a[]){
  printf("median  :%i\n", find_median(a));
  printf("mean    :%i\n", find_mean(a));
  printf("maximum :%i\n", find_maximum(a));
  printf("minimum :%i\n", find_minimum(a));
}