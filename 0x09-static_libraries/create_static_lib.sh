#compile all .c files to object files
gcc -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up object files
rm *.o

