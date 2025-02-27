compiler = g++
options = -Wall
program = main.out

all: $(program)

run: $(program)
	./$(program)

$(program): cities.cpp
	$(compiler) $(options) cities.cpp -o main.out
	
clean:
	rm *.out
