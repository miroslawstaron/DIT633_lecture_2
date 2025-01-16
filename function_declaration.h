#ifndef FUNCTION_DECLARATION_H
#define FUNCTION_DECLARATION_H

/*
* This is a header file, where we declare our functions.
* We can then import these declarations using the #include pre-processor directive.
* You can have as many such .h files as you want, but the praxis is that we one per module
* Basically showing the module's interface. 
*/

// Function declarations

// swap.c
int swap(int* left, int* right);
void swap_example();
int swap_int(int left, int right);

// address_structure.c
void address_example();

// struct_pointers.c
void dynamic_person_example();
void dynamic_person_casting();

// printlist.c
void printlist(char* templist[]);
void printlist2(char* const templist[]);
void demo_printlist(void);

// bits_and_bytes.c
int main_bits_and_bytes();

#endif // FUNCTION_DECLARATION_H