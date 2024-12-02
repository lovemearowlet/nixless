# Variables
CC = gcc
CFLAGS = -O3 -Wall -s
SRC = cloner.c main.c
OBJ = $(SRC:.c=.o)
TARGET = nixless

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

install:
	cp $(TARGET) /bin

# Phony targets
.PHONY: all clean

