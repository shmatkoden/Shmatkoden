CC = gcc
CFLAGS = -Iinclude
LDFLAGS = -L. -lcalculator

all: libcalculator.a main

libcalculator.a: src/calculator.o
	ar rcs $@ $^

main: src/main.o libcalculator.a
	$(CC) -o $@ $< $(LDFLAGS)

src/calculator.o: src/calculator.c
	$(CC) $(CFLAGS) -c $< -o $@

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o libcalculator.a main