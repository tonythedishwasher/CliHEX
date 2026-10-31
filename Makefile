CC = cc
CFLAGS = -Wall -Wextra -g

main: main.c
	$(CC) $(CFLAGS) main.c -o main

.PHONY: all run clean

all: main

run: main
	./main

clean:
	rm -f main