c=gcc
cpp=g++

compile: app.o dfs.o node.o
	$(cpp) app.o dfs.o node.o -o DFS
app : app.cpp
	$(cpp) -c app.cpp
dfs: dfs.cpp dfs.hpp node.hpp
	$(cpp) -c dfs.cpp
node: node.hpp node.cpp
	$(cc) -c node.cpp
	
clean:
	rm -rf *.o *.s	

