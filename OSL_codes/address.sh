opt=1
while [ "$opt" -lt 6 ]
do 
	echo -e "choose one of the following \n 1. create as new address book\n 2.view records \n 3. inserrt new record \n 4. delete record \n 5. modify a record\n 6. exits"
	# echo -e, enables special feature of echo to use \n \t \b etc.
	read opt
	case $opt in
1)
	echo "enter filename "
	read filename 
	if [ -e $filename ];
	then 
	# -e tro check if file exists remove the file 
	rm $filename 
	fi 
	cont=1
	echo "Name\t number\taddresss\n=======================================\n" | cat >>$filename 
	while [ $cont -gt 0 ]
	do
		echo "\n enter name"
		read name 
		echo "enter phone number of $name"
		read address
		echo "$name \t $number \t\t $address" | cat >> $filename
		echo "enter 0 to stop, 1 to enter next"
		read cont
	done;;
2)
	cat $filename ;;
3)
	echo "\n enter name"
	read name 
	echo "enter address of $name"
	read number
	echo "enter address of $name"
	echo "$name \t $number \t \t $address" | cat >>$filenumber ;;
4)
	echo "delete record\n enter name \ phone number"
	read pattern
	temp="temp"
	grep -v $pattern $filename | cat>>$temp
	rm $filename
	cat $temp | cat >> $filename 
	rm $temp;;
5)
	echo "modify record\n enter name \ phone number"
	read pattern
	temp="temp"
	grep -v $pattern $filename | cat>>$temp
	rm $filename
	cat $temp | cat >> $filename 
	rm $temp
	echo "enter name"
	read name
	echo "enter phone number of $name"
	read number
	echo "enter address of $name"
	read address
	echo -e "$name\t$number\t$address"| cat >> $filename;;
    esac
done 

