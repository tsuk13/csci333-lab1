CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

all: hello euler1 euler2

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

euler1: euler1.cpp
	$(CC) $(CFLAGS) -o euler1 euler1.cpp

euler2: euler2.cpp
	$(CC) $(CFLAGS) -o euler2 euler2.cpp
