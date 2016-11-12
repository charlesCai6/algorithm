CC = g++
#FLAGS = -std=c++0x
FLAGS = -std=c++11 -g
INCLUDE = -I ./

all: test

test: test.cpp
	$(CC) $(FLAGS) $(INCLUDE) -o $@ $< 
	
clean:
	rm test -rf