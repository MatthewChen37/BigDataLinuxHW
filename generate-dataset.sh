#!/bin/bash

filename=$1
num_records=$2

touch "$filename"

for ((i=0; i<$num_records;i++))
do
    NUM=$(od -vAn -N4 -tu4 < /dev/urandom) 
    STRING=$(cat /dev/urandom | tr -dc 'a-zA-Z0-9' | fold -w 95 | head -n 1)
    echo "$NUM $STRING" >> "$filename"
done