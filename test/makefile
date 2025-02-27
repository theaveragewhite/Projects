compiler = g++
options = -Wall
program = test.out

all: $(program)

run: $(program)
	./$(program)

$(program): test.cpp
	$(compiler) $(options) test.cpp -o test.out

clean:
	rm *.out
