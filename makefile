CXXFLAGS = -Wall -Wextra

program: program.o
	$(LINK.cc) $^ -o $@