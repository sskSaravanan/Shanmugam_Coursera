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
#ifndef __STATS_H__
#define __STATS_H__
 
/**
 * @brief sort_array Function sort the given array
 *
 * Function takes an unsorted array and sort it 
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return None
 */
 void sort_array(unsigned char array[], unsigned int size);
/**
 * @brief print_statistics Function prints the statistics info
 *
 * Function takes calculated min, max, med, mean value and prints to console
 *
 * @param unsigned int med  - median value of given array
 * @param unsigned int mean - mean value of given array
 * @param unsigned int min  - min value of given array
 * @param unsigned int max  - max value of given array
 *
 * @return None
 */
void print_statistics(int med, int mean, int max, int min) ;
/**
 * @brief print_array Function prints the given array
 *
 * Function takes an array as input and prints to console
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return None
 */
void print_array(unsigned char array[], unsigned int size);
/**
 * @brief find_maximum Function finds the max value
 *
 * Function takes an array as input and finds the max value and returns it
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return unsigned char : max value
 */
unsigned char find_maximum(unsigned char array[], unsigned int size);
/**
 * @brief find_minimum Function finds the max value
 *
 * Function takes an array as input and finds the min value and returns it
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return unsigned char : min value
 */
unsigned char find_minimum(unsigned char array[], unsigned int size);
/**
 * @brief find_median Function finds the median value
 *
 * Function takes an array as input and finds the median value and returns it
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return unsigned char : median value
 */
unsigned char find_median(unsigned char array[], unsigned int size);
 /**
 * @brief find_mean Function finds the mean value
 *
 * Function takes an array as input and finds the mean value and returns it
 *
 * @param unsigned char array
 * @param unsigned int - size of given array
 *
 * @return unsigned char : mean value
 */
unsigned char find_mean(unsigned char array[], unsigned int size);
#endif /* __STATS_H__ */
