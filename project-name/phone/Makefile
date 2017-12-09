
CC=gcc
TARGET=phone
BIN=$(TARGET).c

$(TARGET):$(BIN)
	$(CC) $(BIN) -g -Wall -o $@

.PHONY:clean
clean:
	rm -rf a.out
	rm -rf $(TARGET)
	
