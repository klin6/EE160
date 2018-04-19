CC=gcc
#target for makeing all executable
all: mygrader, mygrader2, countgrades

#mygrader
mygrader: mygrader.o driver.o 
	cc mygrader.o driver.o -o mygrader
#mygrader2
mygrader2: mygrader2.o driver2.o
	cc mygrader2.o driver2.o -o mygrader2
#countgrades
countgrades: countgrades.o
	cc countgrades.o -o countgrades
# header dependency targets
mygrader: driver.h
driver:  driver.h
mygrader2: driver2.h
driver2:  driver2.h

#utilities targets
clean: 
		rm -f *.o
real_clean: clean
		rm -f mygrader mygrader2 countgrades

