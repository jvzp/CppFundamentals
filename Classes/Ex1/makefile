CC = g++
CXXFLAGS = -Wall -Wextra

TARGET = myprog

all: myprog

myprog: main.o complex.o
	$(CC) $(CXXFLAGS) -o myprog main.o complex.o

main.o: main.cpp complex.hpp
	$(CC) $(CXXFLAGS) -c main.cpp

complex.o: complex.cpp complex.hpp
	$(CC) $(CXXFLAGS) -c complex.cpp complex.hpp

clean:
	$(RM) count *.o *~