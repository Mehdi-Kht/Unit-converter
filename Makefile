CC=gcc
CFLAGS=-Wall -Wextra -std=c99
SRC=main.c conversions.c
TESTSRC=tests.c conversions.c
TARGET=convertisseur
TESTTARGET=unit_tests

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

test: $(TESTSRC)
	$(CC) $(CFLAGS) -o $(TESTTARGET) $(TESTSRC)
	./$(TESTTARGET)

clean:
	rm -f $(TARGET) $(TESTTARGET)