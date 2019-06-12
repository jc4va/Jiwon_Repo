# Jiwon Cha
# jc4va

CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -g

OFILES=topological.o

main: $(OFILES)
	$(CXX) $(OFILES)
	doxygen

topological.o: topological.cpp

clean:
	-rm -f *.o *~ a.out