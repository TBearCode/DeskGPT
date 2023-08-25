#!/bin/bash

actions="file folder task rule command "
arg=$(sed -n 1p args.txt|sed "s/ //g")
echo $arg
arg2=$(sed -n 2p args.txt)
echo $arg2
if [[ "$actions" == *"$arg"* ]]; then
	echo working
	if [[ $arg == "file" ]]; then
		echo making file
		touch $arg2
	fi
	if [[ $arg == "folder" ]]; then
		mkdir $arg2
	fi
	if [[ $arg == "task" ]]; then
		echo $arg2 >> tasks.txt
		cat tasks.txt
	fi
	if [[ $arg == "rule" ]]; then
		echo $arg2 >> rules.txt
	fi 
	if [[ $arg == "command" ]]; then
		echo $arg2 = $(tail -1 args.txt | sed "s/_//g") >> ~/.bashrc
		source ~/.bashrc
	fi
fi





