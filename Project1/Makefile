compiler = g++
options = -Wall
program = main.out

all: $(program)

run: $(program)
	./$(program)

$(program): main.cpp Date.cpp calcDays.cpp
	$(compiler) $(options) main.cpp Date.cpp calcDays.cpp -o main.out

clean:
	rm *.out
