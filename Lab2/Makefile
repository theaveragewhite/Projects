compiler = g++
options = -Wall
program = hospitalCharges.out

all: $(program)

run: $(program)
	./$(program)

$(program): hospitalCharges.cpp calcTotalCharges.cpp validateUserInput.cpp
	$(compiler) $(options) hospitalCharges.cpp calcTotalCharges.cpp validateUserInput.cpp -o hospitalCharges.out

clean:
	rm *.out
