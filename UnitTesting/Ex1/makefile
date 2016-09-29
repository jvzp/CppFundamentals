CC = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = myprog

all: myprog

myprog: test_complex.o complex.o
	$(LINK.cc) $^ -o $@ -lcppunit

test_complex.o: test_complex.cpp complex.hpp

complex.o: complex.hpp

clean:
	rm myprog *.o *~
