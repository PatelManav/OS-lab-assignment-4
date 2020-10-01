echo "Enter Basic Salary"
read bs
hra=`echo "$bs * 20 / 100" | bc`
ta=`echo "$bs * 50 / 100" | bc`
total=`echo "$bs + $hra + $ta" | bc`
echo "The Gross Salary is : $total"
