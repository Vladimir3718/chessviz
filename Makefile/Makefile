#Компилятор
CC=gcc
#Ключи компиляции
CFLAGS=-Wall -Werror -c

#Путь к src
SRC=../src/
#Путь к build
BUILD=../build/
#Путь к bin
BIN=../bin/
#Перечень объектных фаилов
objects=$(BUILD)main.o $(BUILD)board.o $(BUILD)board_read.o $(BUILD)board_print_plain.o
#Исходники
sources=$(SRC)main.c $(SRC)board.c $(SRC)board_read.c $(SRC)board_print_plain.c
#Исполняемый фаил
EXE=$(BIN)main

all: ../bin ../build $(BIN)main

$(EXE): $(objects)
	$(CC) $(objects) -o $@

$(BUILD)main.o: $(SRC)main.c 
	$(CC) $(CFLAGS) $(SRC)main.c -o $@
	
$(BUILD)board_read.o: $(SRC)board_read.c $(SRC)board_read.h 
	$(CC) $(CFLAGS) $(SRC)board_read.c -o $@

$(BUILD)board_print_plain.o: $(SRC)board_print_plain.c $(SRC)board_print_plain.h
	$(CC) $(CFLAGS) $(SRC)board_print_plain.c -o $@
	
$(BUILD)board.o: $(SRC)board.c $(SRC)board.h
	$(CC) $(CFLAGS) $(SRC)board.c -o $@
	
clean:
	-rm -rf ../build/*.o ../bin/main