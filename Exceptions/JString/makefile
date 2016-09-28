CC = g++
CXXFLAGS = -Wall -Wextra

TARGET = myprog

all: myprog

myprog: main.o string.o
	$(LINK.cc) $^ -o $@

main.o: main.cpp string.hpp

string.o: string.cpp string.hpp

clean:
	$(RM) myprog *.o *~