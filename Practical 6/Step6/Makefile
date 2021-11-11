CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

#Comment line

all : matrixmultiplication

#linking

matrixmultiplication : main.o matmult.o
	$(CC) -o$@ $^ $(LDFLAGS)
##$(CC) -o matrixmultiplication main.o matmult.o $(LDFLAGS)

#Compiling
matmult.o : matmult.c
	$(CC) -c $(CCFLAGS) $<

main.o : main.c
	$(CC) -c $(CCFLAGS) main.c

clean :
	rm *.o


