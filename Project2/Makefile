compiler = g++
options = -Wall
program = main.out

all: $(program)

run: $(program)
	./$(program) database.txt

$(program): main.cpp Quiz.cpp printResult.cpp
	$(compiler) $(options) main.cpp Quiz.cpp printResult.cpp -o main.out

clean:
	rm *.out
