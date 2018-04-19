#makefile for Lab13

# target to create all executables for this lab
all: averages water

#complete the dependency and action lines for the following targets

# Problem 1
averages: driver1.o averages.o
	cc driver1.o averages.o -o averages
# Problem 2
water: water.o reading.o meter.o
	cc water.o reading.o meter.o -o water

# source file dependencies
#  You should fill these in and add any additional targets you need
#Problem 1
averages.o: averages.h

#Problem 2
meter.o: meter.h

reading.o: reading.h
# utility targets

clean:
	rm -f *.o

real_clean: clean
	rm -f averages water
