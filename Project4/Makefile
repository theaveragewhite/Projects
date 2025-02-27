CXX = g++
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp BookRecommender.cpp
	$(CXX) $(OPTIONS) main.cpp BookRecommender.cpp -o main.out small_ratings.dat

clean:
	rm -f $(PROGRAM)
