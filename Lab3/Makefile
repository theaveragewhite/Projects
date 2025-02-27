compiler = g++
options = -Wall
program = areaCalc.out

all: $(program)

run: $(program)
	./$(program)

$(program): areaCalc.cpp Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp
	$(compiler) $(options) areaCalc.cpp Circle.cpp Rectangle.cpp Square.cpp Trapezoid.cpp -o areaCalc.out

clean:
	rm *.out
