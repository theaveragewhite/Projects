compiler = g++
options = -Wall
program = test.out

all: $(program)

run: $(program)
	./$(program)

$(program): 3np1.cpp
	$(compiler) $(options) 3np1.cpp -o test.out

clean:
	rm *.out
