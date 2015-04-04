main: sort.o main.o 
	g++ -o main main.o sort.o

h2.o: sort.cpp sort.h
	g++ -c sort.cpp

main.o: main.cpp sort.h
	g++ -c main.cpp

clean:
	rm main *.o
