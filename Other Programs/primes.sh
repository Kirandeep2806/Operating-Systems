#!/bin/bash

read -p "Enter first number : " a
read -p "Enter 2nd number : " b

sum=$(($a**$b))
echo "$sum"
if [ $sum -gt 1000 ]
then
	echo "Hi"
else
	echo "Bye"
fi
