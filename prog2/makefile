compiler = g++
options = -Wall
program = stats.out

all: $(program)

run: $(program)
	./$(program)

$(program): stats.cpp
	$(compiler) $(options) stats.cpp -o stats.out

clean:
	rm *.out
