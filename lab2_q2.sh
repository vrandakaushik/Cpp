#!/bin/bash

echo "Enter name:"

read name

mkdir $name

for i in 1 2 3 4 5 

do

touch "$name/$name $i.cpp"

done

