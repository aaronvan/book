CC	= gcc
CFLAGS	= -Wall -g

all:
	$(CC) $(CFLAGS) ex17.c -o fun

clean:
	rm -v fun
