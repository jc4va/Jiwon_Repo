#!/bin/bash
# Name: Jiwon Cha
# ID: jc4va
# File: averagetime.sh
# Date: 10/26/17

echo "Enter the exponent for counter.cpp: "
read input
it=5
total=0
if [ !$input == "quit" ]
	then
	exit 0
fi

for (( i=1; i<it+1; i++))
do
	echo "Running iteration ${i}"
	RUN=`./a.out ${input}| tail -1`
	echo "time taken: ${RUN} ms"
	total=$((total+RUN))
done

echo "${it} iterations took ${total} ms"
ave=$((total/it))
echo "Average time was ${ave}"