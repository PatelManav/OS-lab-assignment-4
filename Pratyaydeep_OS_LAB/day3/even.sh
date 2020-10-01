echo -n "Enter any number : "
read n
i=0
echo "The even numbers from 1 to $n are :"
while [ $i -le $n ]
do
	if [ `expr $i % 2` -eq 0 ]
	then
		echo -n "$i "
	fi
	i=`expr $i + 1`
done

