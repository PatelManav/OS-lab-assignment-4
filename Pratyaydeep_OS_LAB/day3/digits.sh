echo -n "Enter a number : "
read n
sum=0
rev=0
temp=`expr $n`
while [ $temp -gt 0 ]
do
	digit=`expr $temp % 10`
	sum=`expr $sum + $digit`
	rev=`expr $rev \* 10 + $digit`
	temp=`expr $temp / 10`
done
echo "The sum of the digits of $n is : $sum"
echo "The reverse of $n is : $rev"
if [ $rev -eq $n ]
then
	echo "$n is a Palindrome"
else
	echo "$n is not a Palindrome"
fi


