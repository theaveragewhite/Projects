CXX = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): infix.cpp
	$(CXX) $(OPTIONS) infix.cpp -o main.out test_infix-01.txt

clean:
	rm -f $(PROGRAM)
