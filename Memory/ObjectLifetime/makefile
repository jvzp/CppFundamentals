CC = g++
CXXFLAGS = -Wall -Wextra

TARGET = myprog

all: myprog

myprog: main.o 
	$(CC) $(CXXFLAGS) -o myprog main.o

main.o: main.cpp 
	$(CC) $(CXXFLAGS) -c main.cpp

clean:
	$(RM) count *.o *~