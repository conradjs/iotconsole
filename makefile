CC=gcc
CFLAGS=-g -I.
DEPS=main.h consoleserver.h
OBJ=main.o consoleserver.o

	
iotconsole: $(OBJ)
	$(CC) -pthread -o iotconsole main.c consoleserver.c $(CFLAGS)
