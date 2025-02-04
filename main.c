/*
* Project: Lecture 2 Demonstrations
* File: main.c
* Description: Entry point of the program demonstrating various examples.
* 
* (c) 2021, Miroslaw Staron, miroslaw.staron@gu.se
*/

#include <stdio.h>
#include <stdlib.h>
#include "function_declaration.h"

// main as the entry point to the program
int main(int argc, char* argv[])
{
	// let's define program result to make sure that we actually catch problems and pass them on
	int result = 0;
	
	// result = main_bits_and_bytes();

	// swap_example();

	// demo_printlist();

	// address_example();

	// dynamic_person_example();

	dynamic_person_casting();

	// returning the code for OK
	return result;
}