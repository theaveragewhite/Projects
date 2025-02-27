compiler = g++
options = -Wall
program = areaCalc.out

all: $(program)

run: $(program)
	./$(program)

$(program): Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp
	$(compiler) $(options) Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp -o main.out

clean:
	rm *.out
