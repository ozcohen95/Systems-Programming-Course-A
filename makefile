CC = gcc 
AR = ar
FLAGS = -Wall -g 

all: mymathd mymaths mains maind	

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c	
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c		

#creating static lib .a
mymaths: libmyMath.a
	
libmyMath.a: power.o basicMath.o myMath.h
	$(AR) -rcs libmyMath.a power.o basicMath.o myMath.h

#creating dynmayc lib .so
mymathd: libmyMath.so
	

libmyMath.so: power.o basicMath.o myMath.h
	$(CC) -shared -o libmyMath.so power.o basicMath.o myMath.h

#Static
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

#Dynmayc	
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
	
.PHONY: clean all

clean:
	rm -f *.o main	maind mains *.a *.so
	
