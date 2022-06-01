program:main.o calculator.o
	g++ -oprogram main.o calculator.o

main.o: main.cpp
	g++ -g -c main.cpp

calculator.o:calculator.cpp
	g++ -g -c calculator.cpp

clean:
	rm main.o calculator.o program
