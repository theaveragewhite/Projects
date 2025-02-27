all: retirementCalc.out

run: retirementCalc.out
	./retirementCalc.out

retirementCalc.out: retirementCalc.cpp compoundCalc.cpp
	g++ -Wall retirementCalc.cpp compoundCalc.cpp -o retirementCalc.out

clean:
	rm -f retirementCalc.out
