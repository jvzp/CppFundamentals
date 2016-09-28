CC = g++
CXXFLAGS = -Wall -Wextra

TARGET = myprog

all: myprog

myprog: main.o
	$(LINK.cc) $^ -o $@

main.o: main.cpp 

clean:
	$(RM) myprog *.o *~
