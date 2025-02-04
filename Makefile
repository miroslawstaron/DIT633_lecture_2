# Define the compiler to use
CC = gcc

# Define the compiler flags
CFLAGS = -Wall -Wextra -std=c11 -Wno-unused-parameter -Wno-use-after-free -Wno-unused-variable

# Define the source files
SRC = main.c struct_pointers.c address_structure.c bits_and_bytes.c swap.c array_of_pointers.c

# Define the object files (replace .c with .o)
OBJ = $(SRC:.c=.o)

# Define the target executable
TARGET = lecture2

# Default target to build the executable
all: $(TARGET)

# Rule to link object files into the final executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up the build files
clean:
	rm -f $(OBJ) $(TARGET)