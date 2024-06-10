CC = gcc
BIN = ./bin
SRC = ./src
OBJ = ./obj
INC = ./include
CFLAGS = -Wall -g -o
IFLAGS = -I$(INC)
LDFLAGS = -c


calc : $(OBJ)/cal.o $(OBJ)/cal_func.o
	$(CC) $(CFLAGS) $(BIN)/calc $(OBJ)/cal.o $(OBJ)/cal_func.o
	
$(OBJ)/cal.o : $(SRC)/cal.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal.c
	mv *.o $(OBJ)/

$(OBJ)/cal_func.o : $(SRC)/cal_func.c
	$(CC) $(LDFLAGS) $(IFLAGS) $(SRC)/cal_func.c
	mv *.o $(OBJ)/

clean:
	rm $(OBJ)/*.o
	rm $(BIN)/calc

