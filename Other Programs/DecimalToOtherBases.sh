#!/bin/sh

# Credit naake dakkali xD : Btw name is Kiran Deep :)

read -p "Enter a decimal number : " num

for i in 2 3 4 5 6 7 8 9 16
do
	res=""
	num1=$num
	while [ $num1 -ge $i ]
	do
		temp=$num1
		num1=$((num1%i))
		if [ $i -eq 16 ]
		then
			hexval=$(printf "%x" $num1)
			res=$hexval$res
			num1=$(((temp-num1)/i))
			continue
		fi
		res=$num1$res
		num1=$(((temp-num1)/i))
	done
	if [ $i -eq 16 ]
	then
		hexval=$(printf "%x" $num1)
		res=$hexval$res
	else
		res=$num1$res
	fi
	echo "Base $i = $res"
done
