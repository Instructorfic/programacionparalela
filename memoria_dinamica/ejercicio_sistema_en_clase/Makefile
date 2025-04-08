CC = gcc                     
CFLAGS = -Wall -g            
TARGET = a.out            
SRC = ejercicio_en_clase_sistema.c
SRCDIR = .

build:
	$(CC) $(CFLAGS) $(SRCDIR)/$(SRC) -o $(TARGET) -lm

clean:
	rm -f $(TARGET)

run: build
	./$(TARGET)

