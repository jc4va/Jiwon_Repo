#Jiwon Cha (jc4va)
#10/17/17
#Makefile

CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -O2

OFILES = wordPuzzle.o hashTable.o timer.o

main: $(OFILES)
	$(CXX) $(OFILES)

clean:
	-rm -f *.o *~ a.out

wordPuzzle.o: wordPuzzle.cpp hashTable.o hashTable.cpp
hashTable.o: hashTable.cpp hashTable.h
timer.o: timer.cpp timer.h