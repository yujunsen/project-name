
CC = gcc
RM = rm -f
CFLASS  = -Wall -g -std=c99 -Werror
LDFLAGS = 
INC  = -I../inc
BIN	 = main
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

$(BIN):$(OBJS)
	$(CC) $(LDFLAGS) $^ -o $@
$(OBJS):%.o:%.c
	$(CC) $(CFLASS) $(INC) -o $@ -c $<
	
Debug:
	gdb $(TARGET)
Run:
	./$(TARGET)
PUSH:
	git commit -m '$(TARGET)'
	git push -u origin master


.PHONY:clean
clean:
	$(RM) $(BIN)
	$(RM) $(OBJS)
