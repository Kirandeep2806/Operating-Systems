#!/bin/bash

# read -p "Enter first number : " a
# read -p "Enter 2nd number : " b

# sum=$(($a**$b))
# echo "$sum"
# if [ $sum -gt 1000 ]
# then
# 	echo "Hi"
# else
# 	echo "Bye"
# fi

# while [ $a -le $b ]
# do
# 	echo "$a"
# 	a=$(($a+1))
# done




# Code for Primes

read -p "Enter a number : " a
count=0 # Don't give space when you are assigning the values

for((i=2;i<=$(($a/2));i++)) #spaces are not mandatory in for loop
do
	if [ $(($a%$i)) -eq 0 ]
	then
		count=1
		break
	fi
done

if [ $count -eq 0 ]
then
	echo "Prime"
else
	echo "Not Prime"
fi
