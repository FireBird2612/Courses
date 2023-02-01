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
 * @brief This file contains the funtion declaration of the functions implemented
 * in stats.c file. 
 *
 * <Add Extended Description Here>
 *
 * @author Sanket Gunjal
 * @date 18th Jan 2023
 */

#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


/**
 * @brief prints the array of an unsigned char
 *
 * This function takes 2 parameters as input,
 * takes as an input a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will print out the input array to the
 * console in the format below.
 *
 * [array position] = value at array position
 * 
 * Ex: [0] = 34
 *     [1] = 201
 *
 * @param input_array[] An array that you want to print
 * @param array_size 	The size of the array
 *
 * @return The function does not return anything, i.e void.
 */
void print_array(unsigned char input_array[], unsigned int array_size);





/**
 * @brief Sorts the array from largest to smallest
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest, largest being the zeroth element and 
 * smallest being the last element of the array.
 * 
 * The function does not return anything.
 *
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function does not return anything, i.e void.
 */
void sort_array(unsigned char input_array[], unsigned int array_size);





/**
 * @brief Finds the maximum value in a given array
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest first and then after sorting the array,
 * the function returns the maximum value of the zeroth element.
 *
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function returns an int with the maximum value.
 */
int find_maximum(unsigned char input_array[], unsigned int array_size);






/**
 * @brief Finds the minimum value in a given array
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest first and then after sorting the array,
 * the function returns the minimum value of the last element.
 * 
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function returns an int with the minimum value.
 */
int find_minimum(unsigned char input_array[], unsigned int array_size);





/**
 * @brief Finds the median value in a given array
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest first and then after sorting the array,
 * depending on the array size being even or odd
 * will find the median.
 * 
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function returns an int or float with the median value.
 */
int find_median(unsigned char input_array[], unsigned int array_size);





/**
 * @brief Finds the mean value in a given array
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest first and then after sorting the array,
 * the function adds all the values in the array and divides
 * the sum with the array size which gives us the mean.
 * 
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function returns a float with the mean value.
 */
int find_mean(unsigned char input_array[], unsigned int array_size);





/**
 * @brief prints the statistics of a given array.
 *
 * This function takes 2 parameters as input,
 * takes a 8-bit unsigned char array and
 * a unsigned integer which defines the size
 * of the input array.
 * The function will sort the array from largest to 
 * to smallest first and then after sorting the array,
 * the function prints the following,
 * minimum value, calls the find_minimum function.
 * maximum value, calls the find_maximum function.
 * median value, calls the median_value function.
 * mean value, calls the mean_value function.
 * 
 * @param input_array[] An array that you want to sort
 * @param array_size 	The size of the array
 *
 * @return The function returns void.
 */
void print_statistics(unsigned char input_array[], unsigned int array_size);

#endif
