# Name: Jiwon Cha
# ID: jc4va
# File: Makefile
# Data: 11/13/2017

CXX	= clang++

CXXFLAGS	= -Wall -g -m64

AS	= nasm

ASFLAGS	= -f elf64 -g

OFILES	= threexplusone.o threexinput.o timer.o

.SUFFIXES: .o .cpp

.SUFFIXES: .o .s

main:	$(OFILES)
	$(CXX) $(CXXFLAGS) $(OFILES)

clean:
	/bin/rm -f *.o *~

threexinput.o: threexplusone.o threexplusone.s threexinput.cpp timer.cpp
