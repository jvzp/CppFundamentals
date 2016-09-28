CC = g++
CXXFLAGS = -Wall -Wextra

TARGET = myprog

all: myprog

myprog: Circle.o Square.o Triangle.o main.o
	$(LINK.cc) $^ -o $@

main.o: main.cpp Circle.hpp Square.hpp Triangle.hpp IShape.hpp

Circle.o: Circle.cpp Circle.hpp IShape.hpp

Square.o: Square.cpp Square.hpp IShape.hpp

Triangle.o: Triangle.cpp Triangle.hpp IShape.hpp

clean:
	$(RM) myprog *.o *~
