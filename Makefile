main: main.o unindent.o indent.o
	g++ -std=c++11 -o main main.o unindent.o indent.o

tests: tests.o
	g++ -std=c++11 -o tests tests.o

main.o: main.cpp unindent.h
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp doctest.h unindent.h
	g++ -std=c++11 -c tests.cpp

unindent.o: unindent.cpp unindent.h
	g++ -std=c++11 -c unindent.cpp

indent.o: indent.cpp indent.h
	g++ -std=c++11 -c indent.cpp

clean:
	rm -f main.o tests.o unindent.o indent.o
