f=1
echo -n "Enter a number : "
read n
for((i=2;i<n;i++))
do
	if [ `expr $n % $i` -eq 0 ]
	then
		f=0
	fi
done
if [ $f -eq 1 ]
then
	echo "The number $n is Prime"
else
	echo "The number $n is Composite"
fi
