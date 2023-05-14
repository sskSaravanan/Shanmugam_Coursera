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
 * @file stats.c
 * @brief This project helps to find min, max, mean, median, stastics of given single dimensional array
 *
 * Commit1: Created empty function 
 * main() - The main entry point for your program
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() -  Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() -  Given an array of data and a length, returns the mean
 * find_maximum() -  Given an array of data and a length, returns the maximum
 * find_minimum() -  Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author Saravanakumar Shunmugam
 * @date 14May2023
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Function definations */
void sort_array(unsigned char array[], unsigned int size) {
	unsigned char i, j, a;
	printf("\n\rShort array");
	for (i = 0; i < size; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
		 if (array[i] > array[j])
		 {
			a = array[i];
			array[i] = array[j];
			array[j] = a;
		 }
		}
	}
}
void print_statistics(int med, int mean, int max, int min) {
       printf("\n\rMedian = %i; \t Mean = %i; \t Maximum = %i; \t Minimum = %i\n", med, mean, max, min);
}

void print_array(unsigned char array[], unsigned int size) {
	printf("\n\rArray list\n\r");
	int i = 0;
	for (i = 0; i < size; i++) {
	   printf("\n\rdata[%d] = %d", i,array[i]);
	}
}
 
unsigned char find_maximum(unsigned char array[], unsigned int size) {
	unsigned char maxValue = array[0];
	int i = 0;
	for(i = 1; i < size; i++) {
		   if(array[i] > maxValue ) {
				   maxValue = array[i];
		   }
	}
	return maxValue;
}

unsigned char find_minimum(unsigned char array[], unsigned int size) {
	unsigned char minValue = array[0];
    int i = 0;
	for(i = 1; i < size; i++) {
		   if(array[i] < minValue  ) {
				   minValue = array[i];
		   }
	}
	return minValue;
}

unsigned char find_median(unsigned char sorted_array[], unsigned int size) {
	unsigned char medianValue = 0;
	if( size%2 == 0)                                                                  
	{
		medianValue = (sorted_array[(size/2)-1]+sorted_array[(size/2)])/2.0; 
	}		
	else                                                                           
	{
		medianValue = sorted_array[(size/2)]; 
	}
	return medianValue;
}
 
unsigned char find_mean(unsigned char array[], unsigned int size) {
	unsigned char meanValue = 0;
	unsigned int sum =0;
	int i = 0;
	for(i = 0; i < size; i++) {
	   sum += array[i];
	}
	meanValue = sum /size;
	return meanValue;
 }

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  int maximum = 0, minimum = 0, median = 0, mean = 0;
  
  printf("\n\rCoursera Assignment 1 : Embedded software \n");
  maximum = find_maximum(test, SIZE);
  minimum = find_minimum(test, SIZE);
  mean   = find_mean(test, SIZE);
  printf("\n\rUnsorted Array list");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  printf("\n\rSorted array list \n");
  print_array(test, SIZE);
  median  = find_median(test, SIZE);
  print_statistics(median, mean, maximum, minimum);

}
