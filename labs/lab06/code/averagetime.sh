#!/bin/bash

# Name: Jiwon Cha 
# ID: jc4va
# Date: 10/18
# File: averagetime.sh

echo "Dictionary file: "
read d
echo "Grid file: "
read g

RUNNING_TIME1=`./a.out ${d} ${g}| tail -1`
RUNNING_TIME2=`./a.out ${d} ${g}| tail -1`
RUNNING_TIME3=`./a.out ${d} ${g}| tail -1`
RUNNING_TIME4=`./a.out ${d} ${g}| tail -1`
RUNNING_TIME5=`./a.out ${d} ${g}| tail -1`

echo "Average running time in milliseconds is: "
echo $(((${RUNNING_TIME5}+${RUNNING_TIME4}+${RUNNING_TIME3}+${RUNNING_TIME2}+${RUNNING_TIME1})/5))