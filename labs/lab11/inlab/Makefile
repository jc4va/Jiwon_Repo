# Jiwon Cha
# jc4va

CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -g

OFILES=traveling.o middleearth.o

main: $(OFILES)
	$(CXX) $(OFILES)
	doxygen

traveling.o: traveling.cpp
middleearth.o: middleearth.cpp middleearth.h

clean:
	-rm -f *.o *~ a.out