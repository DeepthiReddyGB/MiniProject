FILE=foo.out
BIN=./bin 
SRC=./src 
INC=./inc 
OBJ=$(BIN)/min.o $(BIN)/foo.o

all:$(FILE)

$(FILE):$(OBJ)
		gcc -o  $@ $^

$(BIN)/min.o:min.c
		gcc -o $(BIN)/min.o -c $^

$(BIN)/foo.o:$(SRC)/foo.c $(INC)/foo.h
		gcc -o $(BIN)/foo.o -c $(SRC)/foo.c

clean:
       rm-rf *.out $(BIN)/*.o			