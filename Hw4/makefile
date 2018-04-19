

CALC  = /inst/ee/ee160/ee160/Code.lect/Calc
CHAP4 = /inst/ee/ee160/ee160/Code.text/Chap4

calc: calc.o display.o chrutil.o exponent.o opnd.o presults.o ops.o compute.o
	cc calc.o display.o chrutil.o exponent.o opnd.o presults.o ops.o compute.o -o calc -lcurses

driver1: driver1.o display.o exponent.o chrutil.o
	cc driver1.o display.o exponent.o chrutil.o -o driver1 -lcurses

driver2: driver2.o display.o exponent.o opnd2.o chrutil.o
	cc driver2.o display.o exponent.o opnd2.o chrutil.o -o driver2  -lcurses

driver3: driver3.o compute.o ops.o
	cc driver3.o compute.o ops.o -o driver3 

driver4:  driver4.o chrutil.o presults.o 
	cc driver4.o chrutil.o presults.o -o driver4

driver1.o: exponent.h display.h

driver2.o: display.h exponent.h opnd.h chrutil.h

driver3.o: compute.h  ops.h

driver4.o: presults.h display.h chrutil.h

exponent.o: tfdef.h exponent.h

opnd.o: opnd.h chrutil.h display.h tfdef.h exponent.h

ops.o: ops.h chrutil.h display.h

compute.o: compute.h

presults.o: presults.h display.h

chrutil.o: tfdef.h chrutil.h

links:
	ln -s -f $(CHAP4)/tfdef.h .
	ln -s -f $(CHAP4)/chrutil.c .
	ln -s -f $(CHAP4)/chrutil.h .
	ln -s -f $(CALC)/display.o .
	ln -s -f $(CALC)/compute.h .
	ln -s -f $(CALC)/display.h .
	ln -s -f $(CALC)/exponent.h .
	ln -s -f $(CALC)/opnd.h .
	ln -s -f $(CALC)/ops.h .
	ln -s -f $(CALC)/presults.h .
	ln -s -f $(CALC)/driver1.c .
	cp  -i $(CALC)/presults.c .

clean:
	mv display.o display.sav
	rm -f *.o
	mv display.sav display.o

real_clean: clean
	rm  -f driver1 driver2 driver3 driver4 calc a.out core
