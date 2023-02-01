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
 * @brief This file contains the actual implementation of the the various 
 * functions which are declared in the header file.
 *
 * @author Sanket Gunjal
 * @date 18th Jan 2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* size of the dataset */
#define SIZE (40)

void main(){
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,    6, 114, 
				      88,  45,  76, 123,  87,  25,  23,  200, 122, 
				     150,  90,  92,  87, 177, 244, 201,    6,  12,
				      60,   8,   2,   5,  67,   7,  87,  250, 230,
				      99,   3, 100,  90};

	//2. print statistics
	print_statistics(test, SIZE);
	printf("\n");

	//3. print array
	print_array(test, SIZE);
	
	//4. find median
	float print_median = find_median(test, SIZE);
	printf("\nMedian = %.2f\n", print_median);

	//5. find mean
	float print_mean = find_mean(test, SIZE);
	printf("\nMean = %.2f\n", print_mean);

	//6. find maximum
	int print_maximum = find_maximum(test, SIZE);
	printf("\nMaximum = %d\n", print_maximum);

	//7. find minimum
	int print_minimum = find_minimum(test, SIZE);
	printf("\nMinimum = %d\n", print_minimum);

	//8. sort array
	sort_array(test, SIZE);
}

void print_array(unsigned char input_array[], unsigned int array_size){
	unsigned int counter;
	printf("The given array of size %d = \n", array_size);
	for(counter = 0; counter < array_size; counter++){
		printf("[%d] = %d\n", counter + 1, input_array[counter]);
	}
}

void sort_array(unsigned char input_array[], unsigned int array_size){
	unsigned int outerloop_counter, innerloop_counter;
	for(outerloop_counter = 0; outerloop_counter < array_size; outerloop_counter++){
		for(innerloop_counter = outerloop_counter + 1; innerloop_counter < array_size; innerloop_counter++){
			if(input_array[outerloop_counter] >= input_array[innerloop_counter]){
			}
			else{
				int temp = input_array[outerloop_counter];
				input_array[outerloop_counter] = input_array[innerloop_counter];
				input_array[innerloop_counter] = temp;
			}
		}
	}
}

int find_minimum(unsigned char input_array[], unsigned int array_size){
	sort_array(input_array, array_size);
	return input_array[array_size - 1];
}	

int find_maximum(unsigned char input_array[], unsigned int array_size){
	sort_array(input_array, array_size);
	return input_array[array_size - array_size];
}

int find_median(unsigned char input_array[], unsigned int array_size){
	sort_array(input_array, array_size);
	// find even or odd
	int result = array_size % 10;
	
	if(result){
		//odd
		int median_element = (array_size + 1) / 2;
		return input_array[median_element - 1];
	}
	else{
		int median_element = array_size / 2;
		float even_median = ((input_array[median_element] - 1) + (input_array[median_element])) / 2;
		return even_median;
	}
}

int find_mean(unsigned char input_array[], unsigned int array_size){
	sort_array(input_array, array_size);

	unsigned int outerloop_counter, calculate_sum;
	
	calculate_sum = 0;
	for(outerloop_counter = 0; outerloop_counter < array_size; outerloop_counter++){
		calculate_sum += input_array[outerloop_counter];
	}

	//calculate mean
	float calculate_mean;
	return calculate_mean = calculate_sum / array_size;
}

void print_statistics(unsigned char input_array[], unsigned int array_size){
	printf("STATISTICS:\n");
	unsigned int calculate_minimum = find_minimum(input_array, array_size);
	printf("Minimum = %d\n", calculate_minimum);

	unsigned int calculate_maximum = find_maximum(input_array, array_size);
	printf("Maximum = %d\n", calculate_maximum);

	float calculate_mean = find_mean(input_array, array_size);
	printf("Mean = %.2f\n", calculate_mean);

	float calculate_median = find_median(input_array, array_size);
	printf("Median = %.2f\n", calculate_median);
}






