#!/bin/bash

echo "Enter a name:"
read name
mkdir $name
touch "$name/$name.sh"
