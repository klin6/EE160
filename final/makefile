# makefile for the EE160 Final Project

# target to make all executables
all:

# Executables
miensfeld: miensfeld.o miensfeld.o menu.o placement.o around.c movement.o flags.o replay.o
	cc display.o miensfeld.c menu.c placement.c around.c movement.c flags.c replay.c -o miensfeld -lcurses

# Dependencies
miensfeld.o: miensfeld.h display.h

menu.o: miensfeld.h display.h

placement.o: miensfeld.h display.h

around.o: miensfeld.h display.h

movement.o: miensfeld.h display.h

flags.o: miensfeld.h display.h

replay.o: miensfeld.h display.h

# Utility Functions
clean:
	rm -f *.o
real_clean:	clean
	rm -f miensfeld
