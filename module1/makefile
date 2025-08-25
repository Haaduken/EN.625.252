CC = gcc
CFLAGS = -Wall -Wextra -std=c17 -O2
TARGET = verify

all: $(TARGET)

$(TARGET): verify.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGET)