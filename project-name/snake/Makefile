

TARGET=main
SRC=./src/
INC=-I./inc
OBJ=$(SRC)$(TARGET).c
CC=gcc
CFLASS=-Wall -g -o 
LIBSS=


$(TARGET):$(OBJ)
	@echo 'gcc $< start..'
	$(CC) $(CFLASS) $@ $< $(LIBSS)
	@echo 'ok....'
Debug:
	gdb $(TARGET)
Run:
	./$(TARGET)


.PHONY:clean
clean:
	rm -rf $(TARGET)
