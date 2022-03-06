CC = gcc

CFLAGS = 

all: linked_list.o linked_list.h
	${CC} ${CFLAGS} -shared -Wall linked_list.o -o linked_list_lib.so

debug: linked_list.o linked_list.h
	${CC} ${CFLAGS} -g -v -shared -Wall linked_list.c -o linked_list.so

linked_list.o: linked_list.c
	${CC} ${CFLAGS} -c $^ -o $@
