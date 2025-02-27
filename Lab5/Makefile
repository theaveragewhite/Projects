compiler = g++
options = -Wall
program = parking.out

all: $(program)

run: $(program)
	./$(program)

$(program): Invoice.cpp Permit.cpp Employee.cpp VehicleInfo.cpp Truck.cpp
	$(compiler) $(options) Invoice.cpp Permit.cpp Employee.cpp VehicleInfo.cpp Truck.cpp -o main.out

clean:
	rm *.out
