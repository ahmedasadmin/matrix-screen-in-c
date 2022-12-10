

/CC=clang
CFLAGS=-g -Wall
OBJS=main.o matrix.o ui.o



all: main


main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lcurses


%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf *.o main
