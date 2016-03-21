lab2:lab2.o Class.o
	g++ -o lab2 lab2.o Class.o

Class.o: Class.cpp Class.h
	g++ -c Class.cpp

lab2.o:lab2.cpp Class.h
	g++ -c lab2.cpp


clean:
	rm Class*.o
