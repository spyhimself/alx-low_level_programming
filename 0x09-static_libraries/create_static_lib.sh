#!/bin/bash

# Collect all the .c files in the current directory
C_FILES=$(ls *.c)

# Compile each .c file into an object file
for c_file in $C_FILES; do
    gcc -c $c_file -o ${c_file%.c}.o
done

# Create the static library from all the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
