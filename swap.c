/*
* Project: Lecture 2 Demonstrations
* File: swap.c
* Description: Contains functions to demonstrate swapping values and pointers.
* 
* (c) 2021, Miroslaw Staron, miroslaw.staron@gu.se
*/


#include "function_declaration.h"
#include <stdio.h>
#include <stdlib.h>


/*
* Here is the definition of the function
* Note! both parameters are ints
*/
int swap_int(int left, int right)
{
	int temp;	// temporary variable

	// here is where the swapping takes place
	temp = left;
	left = right;
	right = temp;

	// we return the left variable just for fun
	return left;
}

/*
* Here is the definition of the function
* Note! both parameters are pointers
* Otherwise the swap will not work!
*/
int swap(int *left, int *right)
{
    // Increment a sample byte value
    unsigned char one_byte = 0x10; 
    one_byte++;

    // Temporary variable for swapping
    int temp;

    // Print the address and value of the left variable
    printf("Address value: %p\n", (void *)left);
    printf("Value of left is %d\n", *left);

    // Perform the swap
    temp = *left;
    *left = *right;
    *right = temp;

    // Return the left variable's new value
    return *left;
}

/*
* This function demostrates swapping between two variables
* Note! this uses pointers
*/
void swap_example()
{
	int a = 12; // left for swapping
	int b = 13; // right for swapping

	int c = a;
	int d = b;

	swap(&a, &b);
	// printf("Case 1: a: %d, b: %d\n", a, b);

	char *pX = malloc(10 * sizeof(char)); 
	
	printf("The value of pX is: %lu\n", (unsigned long)pX);
	printf("The value of pX is: %p\n", (char *)pX);
	
	
	// *pX = (char*)malloc(10 * sizeof(char));

	// this is a pointer to a function
	// that function takes two arguments int *
	// and returns an integer

	// int swap(int* left, int* right)
	
	int (*foo)(int*, int*);
	
	// this is a very different than the line above
	// because it means that foo is a function that takes two pointers as arguments
	// and returns a pointer to an int
	// int *foo(int*, int*);

	
	
	// now, let's assign that pointer to swap 
	// note the signature
	foo = &swap;
	
	printf("The value of foo is: %lu\n", (unsigned long) foo);
 

	// note that we use pointers, which are passed by value
	// the values of the pointers point to the place in memory (stack)
	// where a and b are stored
	int rSwap = foo(&a, &b);

	char result = *((char*)foo);

	printf("decimal value of the pointer to foo: %lu\n", (unsigned long) result);

	// print variables
	printf("Left: %d, right: %d\n", a, b);

	int lSwap = swap(&c, &d);

	printf("Left: %d, right: %d\n", a, b);
}

