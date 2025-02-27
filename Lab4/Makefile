compiler = g++
options = -Wall
program = hospitalCharges.out

all: $(program)

run: $(program)
	./$(program)

$(program): hospitalCharges.cpp Patient.cpp
	$(compiler) $(options) hospitalCharges.cpp Patient.cpp -o hospitalCharges.out

clean:
	rm *.out
