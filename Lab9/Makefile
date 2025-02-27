compiler = g++
options = -Wall
program = main.out

all: $(program)

run: $(program)
	./$(program)

$(program): main.cpp
	$(compiler) $(options) main.cpp -o main.out

clean:
	rm *.out
