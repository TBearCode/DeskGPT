#!bin/bash

echo "Welcome to DeskGPT, would you like to use interactive mode (i), scripting mode (w), or command lookup (c)?"

read choice
if test "$choice" = "w"
then
	echo "What would you like your script name to be (do not include any file extensions)?"
	read filename
	echo "Do you have an input file? y/n"
	read input
	if test "$input" = "y"
	then
		echo "Please specify filename:"
		read file_in
		./compiler/compiler -w $filename < $file_in 
	else
		echo "Please begin typing."
		while [[ "$input" != "done" ]]
		do
			echo $input >> .input.txt
			read input
		done
		./compiler/compiler -w temp < .input.txt
	fi
	echo "Your script has been created!"
	exit
fi


if test "$choice" = "c"
then
	echo "What would you like to translate?"
	while [[ "$input" != "done" ]]
	do
		echo $input > .input.txt
		./compiler/compiler -c -w temp < .input.txt
		cat temp.sh
		rm temp.sh
		read input
	done
	exit
fi


echo "What would you like to do?"
read input
while [[ "$input" != "done" ]]
do
	echo $input > .input.txt
	./compiler/compiler -w temp < .input.txt
	bash temp.sh
	rm stack.txt  
	rm temp.sh
	read input
done

