compiler = g++
options = -Wall
program = test.out

all: $(program)

run: $(program)
	./$(program)

$(program): test3.cpp
	$(compiler) $(options) test3.cpp -o test3.out

clean:
	rm *.out
