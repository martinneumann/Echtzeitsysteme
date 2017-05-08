CFLAGS = -Wall -o
CC = gcc

default: queuedemo

queuedemo: queuedemo.c queue.c process.c processmodel.c
	$(CC) $(CFLAGS) queuedemo queuedemo.c queue.c process.c processmodel.c

queue: queue.c process.c 
	$(CC) $(CFLAGS) queue queue.c process.c

clean:
	-rm -f queue queuedemo *.o *~
