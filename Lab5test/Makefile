compiler = g++
options = -Wall
program = parking.out

all: $(program)

run: $(program)
	./$(program)

$(program): Employee.cpp Invoice.cpp main.cpp Motorcycle.cpp Sedan.cpp Sports.cpp Student.cpp Truck.cpp Vendor.cpp Visitor.cpp
	$(compiler) $(options) Employee.cpp Invoice.cpp main.cpp Motorcycle.cpp Sedan.cpp Sports.cpp Student.cpp Truck.cpp Vendor.cpp Visitor.cpp -o main.out

clean:
	rm *.out
