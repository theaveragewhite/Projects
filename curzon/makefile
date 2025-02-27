compiler = g++
options = -Wall
program = curzon.out

all: $(program)

run: $(program)
	./$(program)

$(program): curzon.cpp
	$(compiler) $(options) curzon.cpp -o curzon.out

clean:
	rm *.out
