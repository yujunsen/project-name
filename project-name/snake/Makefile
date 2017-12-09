
CC = gcc
RM = rm -f
CFLASS  = -Wall -g 
LDFLAGS = 
INC  = -I./inc
BIN	 = main
# DIR  = ./src/
SRC = $(wildcard src/*.c)

dir=$(notdir $(SRC))
OBJ = ${patsubst %.c, %.o, $(SRC)}

all:$(BIN)

$(BIN):$(OBJ)
	$(CC) -o $@ $^ 

$(OBJ):%.o:%.c
	$(CC) $(CFLAGS) $(INC) -c $^ -o $@ 






Debug:
	gdb $(TARGET)
Run:
	./$(TARGET)
PUSH:
	git commit -m '$(BIN)'
	git push -u origin master


.PHONY:clean
clean:
	$(RM) $(BIN)
	$(RM) $(OBJ)
