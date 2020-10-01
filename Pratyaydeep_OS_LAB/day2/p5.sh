echo "Enter Three Numbers"
read a b c
if test $a -gt $b
then
	if test $a -gt $c
	then
		echo "$a is greatest"
	else
		echo "$c is greatest"
	fi
else
	if test $b -gt $c
	then
		echo "$b is greatest"
	else
		echo "$c is greatest"
	fi
fi

