echo -n "Enter a Number : "
read n
echo "The sum from 1 to $n is : "
sum=0
i=1
while [ $i -le $n ]
do
	if [ $i -eq 1 ]
	then
		echo -n "$i "
	else
		echo -n "+ $i "
	fi
	sum=`expr $sum + $i`
	i=`expr $i + 1`
done
echo "= $sum"

