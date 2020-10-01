echo -n "Enter any number : "
read n
i=1
echo "The odd numbers from 1 to $n are :"
while [ $i -le $n ]
do
	if [ `expr $i % 2` -eq 1 ]
	then
		echo -n "$i "
	fi
	i=`expr $i + 1`
done

