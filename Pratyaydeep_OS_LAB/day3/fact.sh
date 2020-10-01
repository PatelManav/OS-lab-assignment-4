echo "Enter any number"
read n
fact=1
for((i=1;i<=n;i++))
do
	fact=`expr $fact \* $i`
done
echo "The factorial of $n is : $fact"