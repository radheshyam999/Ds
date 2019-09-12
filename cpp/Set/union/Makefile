cc=g++
c=gcc
compile: Union.o main.o
	$(cc) main.o Union.o -o funo
Union.o: Union.hpp Union.cpp 
	$(cc) -c Union.cpp 
mian.o: main.cpp
	$(cc) -c main.cpp
clean:
	rm -rf *.o *.exe	
