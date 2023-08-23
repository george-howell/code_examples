CC=gcc
INC_DIR = ./inc
CFLAGS=-Wall -I$(INC_DIR)

LINK_TARGET = hello

OBJS =  \
 test1.o \
 test2.o \
 main.o

REBUILDABLES = $(OBJS) $(LINK_TARGET)

all: $(LINK_TARGET)
	echo All done

$(LINK_TARGET) : $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

%.o : ./src/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

main.o: ./inc/main.h ./inc/test1.h ./inc/test2.h
test1.o: ./inc/test1.h ./inc/test2.h
test2.o: ./inc/test2.h

clean: 
	rm -f $(REBUILDABLES)
	echo Clean done
