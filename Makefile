# Define the compiler
CC = gcc
 
# Define any compile-time flags
CFLAGS = -Wall -g
 
# Define the source file names
SRC = main.c
 
# Define the executable file name
EXEC = mySA
 
# Default target
all: $(EXEC)
 
$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)
 
# Clean target for removing compiled binary and object files
clean:
	rm -f $(EXEC) *.o
 
# Phony targets for commands that do not represent files
.PHONY: all clean