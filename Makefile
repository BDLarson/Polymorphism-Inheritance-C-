#******************************************************************************
## Function name: Makefile
##
## DESCRIPTION:   A set of commands to compile all files in homework 10
##
## Parameters:    n/a
##
## Return values: n/a
##
##*****************************************************************************

# Declare the variables
CC = g++

CFLAGS = -c

# This target will compile all the files
all: main.o animal.o cow.o duck.o horse.o
	$(CC) -o hw10 main.o animal.o cow.o duck.o horse.o

# This target will compile the animal file only.
animal.o: animal.cpp
	$(CC) $(CFLAGS) animal.cpp

# This target will compile the cow file only.
cow.o: cow.cpp
	$(CC) $(CFLAGS) cow.cpp

# This target will compile the duck file only.
duck.o: duck.cpp
	$(CC) $(CFLAGS) duck.cpp

# This target will compile the horse file only.
horse.o: horse.cpp
	$(CC) $(CFLAGS) horse.cpp

# This target will remove the executable and all object files
clean:
	rm -rf *o hw10
