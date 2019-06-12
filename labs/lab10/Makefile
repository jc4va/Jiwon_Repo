#Jiwon Cha (jc4va)
#11/16/17
#Makefile

CXX=clang++ 

.SUFFIXES: .o .cpp

OFILES=HuffNode.o huffmandec.o 
OFILES2=HuffNode.o huffmanenc.o heap.o

main: encoder decoder

decoder: $(OFILES)
	$(CXX) -o decoder $(OFILES)

encoder: $(OFILES2)
	$(CXX) -o encoder $(OFILES2)

clean:
	-rm -f *.o *~ decoder.out encoder.out

heap.o: heap.cpp heap.h HuffNode.h
HuffNode.o: HuffNode.h HuffNode.cpp
huffmanenc.o: HuffNode.h HuffNode.cpp huffmanenc.cpp heap.h
huffmandec.o: HuffNode.h HuffNode.cpp huffmandec.cpp