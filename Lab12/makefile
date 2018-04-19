#makefile for Lab12

# target to create all executables for this lab
all: swap swapbig reorder

#complete the dependency and action lines for the following targets

# Problem 1
swap: swap.o swaptest.o
	cc swap.o swaptest.o -o swap
# Problem 2
swapbig: swap.o swapbig.o
	cc swap.o swapbig.o -o swapbig
# Problem 3
reorder: swap.o reorder.o
	cc swap.o reorder.o -o reorder

# source file dependencies
#  You should fill these in and add any additional targets you need

swap.o: swap.h

swapbig.o: swap.h

reorder.o: swap.h

# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f swap swapbig reorder
