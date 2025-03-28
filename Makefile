CC = gcc                     
CFLAGS = -Wall -g            
TARGET = programa            
DIR := $(shell pwd)                     
SRC = programa.c

DIR := $(shell echo $(DIR) | tr -d ' ')
SRC := $(shell echo $(SRC) | tr -d ' ')
#CFLAGS := $(shell echo $(CFLAGS) | tr -d ' ')
CC := $(shell echo $(CC) | tr -d ' ')


# Regla para compilar el programa
all:
	$(CC) $(CFLAGS) $(DIR)/$(SRC) -o $(TARGET) -lm

# Regla para limpiar los archivos generados
clean:
	rm -f $(TARGET)

# Regla para ejecutar el programa
run: all
	./$(TARGET)

