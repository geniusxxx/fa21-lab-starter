CC=gcc
CFLAGS=-Wall -std=c99 -g

all: linked_list bit_ops vector 

linked_list: linked_list.o test_linked_list.o
	$(CC) -o linked_list linked_list.o test_linked_list.o

linked_list.o: linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c linked_list.c

test_linked_list.o: test_linked_list.c linked_list.h
	$(CC) $(CFLAGS) -c test_linked_list.c

bit_ops: bit_ops.o test_bit_ops.o
	@$(CC) -o $@ $^

bit_ops.o: bit_ops.c bit_ops.h
	@$(CC) $(CFLAGS) -c -o $@ $<

test_bit_ops.o: test_bit_ops.c bit_ops.h
	@$(CC) $(CFLAGS) -c -o $@ $<

vector: vector.o test_vector.o
	@$(CC) -o $@ $^

vector.o: vector.c vector.h
	@$(CC) $(CFLAGS) -c -o $@ $<

test_vector: test_vector.c vector.h
	@$(CC) $(CFLAGS) -c -o $@ $<
clean:	
	rm linked_list linked_list.o test_linked_list.o
	rm bit_ops bit_ops.o test_bit_ops.o
	rm vector vector.o test_vector.o
