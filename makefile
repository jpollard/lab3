CC = g++
DEBUG = -ggdb
CFLAGS = -Wall -c 
LFLAGS = -Wall -o
SRC = invest.cpp
OBJ = invest.o
DEST = invest

all: $(OBJ)
	$(CC) $(DEBUG) $(OBJ) $(LFLAGS) $(DEST)

$(OBJ): $(SRC)
	$(CC) $(DEBUG) $(CFLAGS) $(SRC)

clean: 
	rm $(OBJ)
