echo -n "Enter a number : "
read n
echo -n "The fibonacci series upto $n th element is : "
nm1=0
nm2=1
if [ $n -eq 1 ]
then
	echo "$nm1"
elif [ $n -eq 2 ]
then
	echo "$nm1 $nm2"
else
	echo -n "0 1 "
	for((i=3;i<=n;i++))
	do
		temp=`expr $nm1 + $nm2`
		nm1=`expr $nm2`
		nm2=`expr $temp`
		echo -n "$temp "
	done
fi


