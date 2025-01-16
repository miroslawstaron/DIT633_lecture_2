/*
* This is a header file, where we declare our functions.
* We can then import these declarations using the #include pre-processor directive.
* You can have as many such .h files as you want, but the praxis is that we one per module
* Basically showing the module's interface. 
*/

int swap(int* left, int* right);

// Function to demonstrate the use of pointers
void swap_example();

int swap_int(int left, int right);

void address_example();

void dynamic_person_example();

void dynamic_person_casting();

// function declaration
void printlist(char* templist[]);

// and another one, we'll get back to it later
void printlist2(char* const templist[]);

void demo_printlist(void);
